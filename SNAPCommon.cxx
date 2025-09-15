/*=========================================================================

  Program:   Insight Segmentation & Registration Toolkit
  Module:    $RCSfile: SNAPCommon.cxx.in,v $
  Language:  C++
  Date:      $Date: 2009/02/03 20:28:14 $
  Version:   $Revision: 1.4 $
  Copyright (c) 2003 Insight Consortium. All rights reserved.
  See ITKCopyright.txt or http://www.itk.org/HTML/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even 
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR 
     PURPOSE.  See the above copyright notices for more information.
=========================================================================*/
#include "SNAPCommon.h"

// Non-cvs version
const char SNAPSoftVersion[] = "ITK-SNAP 3.8.2";

// Just the number part of the SNAP version
unsigned int SNAPVersionMajor = 3;
unsigned int SNAPVersionMinor = 8;
unsigned int SNAPVersionPatch = 2;
const char SNAPVersionQualifier[] = "";

// Hardware architecture for this build
const char SNAPArch[] = "win64-AMD64";

// A string that appears in the user interface
const char SNAPUISoftVersion[] = 
  "Version 3.8.2\n Feb 19, 2021";

// Release date of the current version
const char SNAPCurrentVersionReleaseDate[] = "20210219";

// String describing the current build environment
const char SNAPBuildInfo[] =
    "Build date        2021/06/29¶\n"
    "Git commit hash   2da5b3560f92e9887ecf5398e71dcb0719bb3143\n"
    "Git commit date   2021-02-18 15:20:08 -0500\n"
    "Git branch        master\n"
    "Build site name   SERVER-1\n"
    "Build OS          Windows-10.0.19041 AMD64\n"
    "Build type        \n"
    "ITK version       4.12.2\n"
    "VTK version       6.3.0\n"
    "Qt version        5.6.2\n"
    "CMake version     3.8.0-rc3\n"
    "C compiler        MSVC 19.0.23026.0\n"
    "C++ compiler      MSVC 19.0.23026.0\n";

// Release date of the latest version whose user preference files are
// incompatible with the current version and will be erased
const char SNAPLastIncompatibleReleaseDate[] = "20131201";

// Build date - shown to help debugging nightly builds
const char SNAPBuildDate[] = "2021/06/29";

// GIT signature
const char SNAPGitSignature[] = "2da5b3560f92e9887ecf5398e71dcb0719bb3143";
