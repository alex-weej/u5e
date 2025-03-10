#ifndef U5E_VERSION
#define U5E_VERSION

namespace u5e {
  namespace version {
    // Compile-time version definition
    static const int major = 0;
    static const int minor = 0;

    // Run-time introspection
    extern int lib_major;
    extern int lib_minor;
    extern int lib_patch;
  }
}

#endif
