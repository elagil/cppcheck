// For a release version x.y.z the MAJOR should be x and both MINOR and DEVMINOR should be y.
// After a release the DEVMINOR is incremented. MAJOR=x MINOR=y, DEVMINOR=y+1

#ifndef versionH
#define versionH

#define CPPCHECK_MAJOR_VERSION 2
#define CPPCHECK_MINOR_VERSION 13
#define CPPCHECK_DEVMINOR_VERSION 13
#define CPPCHECK_FIX_VERSION 0

#define STRINGIFY(x) STRING(x)
#define STRING(VER) #VER
#if CPPCHECK_MINOR_VERSION == CPPCHECK_DEVMINOR_VERSION
#define CPPCHECK_VERSION_STRING STRINGIFY(CPPCHECK_MAJOR_VERSION) "." STRINGIFY(CPPCHECK_MINOR_VERSION) "." STRINGIFY(CPPCHECK_FIX_VERSION)
#define CPPCHECK_VERSION CPPCHECK_MAJOR_VERSION,CPPCHECK_MINOR_VERSION,CPPCHECK_FIX_VERSION,0
#else
#define CPPCHECK_VERSION_STRING STRINGIFY(CPPCHECK_MAJOR_VERSION) "." STRINGIFY(CPPCHECK_DEVMINOR_VERSION) " dev"
#define CPPCHECK_VERSION CPPCHECK_MAJOR_VERSION,CPPCHECK_MINOR_VERSION,99,0
#endif
#define LEGALCOPYRIGHT L"Copyright (C) 2007-2023 Cppcheck team."

#endif
