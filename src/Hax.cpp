/*
 * Copyright (C) dakwak, Inc - All Rights Reserved
 *
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 *
 * Written by Ahmad Amireh <ahmad@dakwak.com>, December 2011
 */

#include "Hax/Hax.hpp"
#include "Hax/FileManager.hpp"
#include "Hax/LogManager.hpp"
#include "Hax/Configurator.hpp"

namespace Hax {
  
  void HaxInit()
  {
    // set up the logger
    FileManager::getSingleton().resolvePaths();
    LogManager::getSingleton().init();
    LogManager::getSingleton().setSilent( true );
    LogManager::getSingleton().configure();
    
    Configurator::subscribe(&LogManager::getSingleton(), "Log Manager");    
  }
  
  void HaxCleanup()
  {
    LogManager::getSingleton().cleanup();    
  }
  
}
