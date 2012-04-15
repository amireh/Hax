#!/usr/bin/env ruby

root = ARGV[1] || Dir.pwd
packages = ARGV[0] ? [ARGV[0]] : ["Hax"]

Dir.chdir "#{root}/packages"
puts Dir.pwd
packages.each { |p|
  puts "@ Exporting packages/#{p}.pkg to #{root}/wrappers/#{p}_wrap.cxx:"

  command = "tolua++ -n #{p} -o \"#{root}/wrappers/#{p}_wrap.cxx\" \"#{p}.pkg\""
  system(command)
}
puts "@ Done!"  
Dir.chdir "#{root}"