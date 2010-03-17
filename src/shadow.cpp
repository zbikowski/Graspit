//######################################################################
//
// This file is part of GraspIt!
// Copyright (C) 2002-2009  Columbia University in the City of New York.
// All rights reserved.
//
// GraspIt! is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// GraspIt! is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with GraspIt!.  If not, see <http://www.gnu.org/licenses/>.
//
// Author(s): Andrew T. Miller 
//
// $Id: shadow.cpp,v 1.4.2.2 2009/04/27 14:33:14 cmatei Exp $
//
//######################################################################

/*! \file 
  \brief Implements the special %Shadow robot class
 */

#include "shadow.h"
#include "world.h"


int
Shadow::load(QString filename)
{
  int result = Robot::load(filename);
  if (result != SUCCESS) return result;
  myWorld->toggleCollisions(false, base,chainVec[4]->getLink(1));
  myWorld->toggleCollisions(false, chainVec[1]->getLink(0),chainVec[0]->getLink(0));

  return result;
}
