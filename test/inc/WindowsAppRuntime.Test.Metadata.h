﻿// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#ifndef __WINDOWSAPPRUNTIME_TEST_METADATA_H
#define __WINDOWSAPPRUNTIME_TEST_METADATA_H

#define WINDOWSAPPRUNTIME_TEST_METADATA_VERSION            0x0004000107AF014DLLu
#define WINDOWSAPPRUNTIME_TEST_METADATA_VERSION_MAJOR      4
#define WINDOWSAPPRUNTIME_TEST_METADATA_VERSION_MINOR      1
#define WINDOWSAPPRUNTIME_TEST_METADATA_VERSION_BUILD      1967
#define WINDOWSAPPRUNTIME_TEST_METADATA_VERSION_REVISION   333
#define WINDOWSAPPRUNTIME_TEST_METADATA_VERSION_STRING     L"4.1.1967.333"

#define WINDOWSAPPRUNTIME_TEST_MSIX_PUBLISHERID            L"8wekyb3d8bbwe"

#define WINDOWSAPPRUNTIME_TEST_MSIX_FRAMEWORK_PACKAGE_NAME L"Microsoft.WindowsAppRuntime.Framework.4.1"
#define WINDOWSAPPRUNTIME_TEST_MSIX_DDLM_PACKAGE_NAME      L"WindowsAppRuntime.Test.DDLM"
#define WINDOWSAPPRUNTIME_TEST_MSIX_MAIN_PACKAGE_NAME      L"WindowsAppRuntime.Test.DynDep.DataStore.4.1"
#define WINDOWSAPPRUNTIME_TEST_MSIX_SINGLETON_PACKAGE_NAME L"WindowsAppRuntime.Test.Singleton"

#define WINDOWSAPPRUNTIME_TEST_PACKAGE_DDLM_NAMEPREFIX     L"WindowsAppRuntime.Test.DDLM"
#define WINDOWSAPPRUNTIME_TEST_PACKAGE_DDLM_VERSION        WINDOWSAPPRUNTIME_TEST_METADATA_VERSION
#define WINDOWSAPPRUNTIME_TEST_PACKAGE_DDLM_VERSION_STRING WINDOWSAPPRUNTIME_TEST_METADATA_VERSION_STRING


#define MSIX_PACKAGE_ARCHITECTURE_ARM       L"arm"
#define MSIX_PACKAGE_ARCHITECTURE_ARM64     L"arm64"
#define MSIX_PACKAGE_ARCHITECTURE_NEUTRAL   L"neutral"
#define MSIX_PACKAGE_ARCHITECTURE_X64       L"x64"
#define MSIX_PACKAGE_ARCHITECTURE_X86       L"x86"

#if defined(_M_X64)
#define WINDOWSAPPRUNTIME_TEST_PACKAGE_DDLM_ARCHITECTURE   MSIX_PACKAGE_ARCHITECTURE_X64
#elif defined(_M_IX86)
#define WINDOWSAPPRUNTIME_TEST_PACKAGE_DDLM_ARCHITECTURE   MSIX_PACKAGE_ARCHITECTURE_X86
#elif defined(_M_ARM64)
#define WINDOWSAPPRUNTIME_TEST_PACKAGE_DDLM_ARCHITECTURE   MSIX_PACKAGE_ARCHITECTURE_ARM64
#elif defined(_M_ARM)
#define WINDOWSAPPRUNTIME_TEST_PACKAGE_DDLM_ARCHITECTURE   MSIX_PACKAGE_ARCHITECTURE_ARM
#else
#   error "Unknown processor architecture"
#endif
#define WINDOWSAPPRUNTIME_TEST_PACKAGE_DDLM_NAME           WINDOWSAPPRUNTIME_TEST_PACKAGE_DDLM_NAMEPREFIX L"-" WINDOWSAPPRUNTIME_TEST_PACKAGE_DDLM_VERSION_STRING  L"-" WINDOWSAPPRUNTIME_TEST_PACKAGE_DDLM_ARCHITECTURE
#define WINDOWSAPPRUNTIME_TEST_PACKAGE_DDLM_PUBLISHERID    WINDOWSAPPRUNTIME_TEST_MSIX_PUBLISHERID
#define WINDOWSAPPRUNTIME_TEST_PACKAGE_DDLM_FAMILYNAME     WINDOWSAPPRUNTIME_TEST_PACKAGE_DDLM_NAME L"_" WINDOWSAPPRUNTIME_TEST_PACKAGE_DDLM_PUBLISHERID
#define WINDOWSAPPRUNTIME_TEST_PACKAGE_DDLM_FULLNAME       WINDOWSAPPRUNTIME_TEST_PACKAGE_DDLM_NAME L"_" WINDOWSAPPRUNTIME_TEST_PACKAGE_DDLM_VERSION_STRING L"_" WINDOWSAPPRUNTIME_TEST_PACKAGE_DDLM_ARCHITECTURE L"__" WINDOWSAPPRUNTIME_TEST_PACKAGE_DDLM_PUBLISHERID

#endif //__WINDOWSAPPRUNTIME_TEST_METADATA_H
