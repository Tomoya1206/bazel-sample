cc_library(
    name = 'sample',
    hdrs = ['sample.hpp',
           ],
    srcs = ['sample.cc',
           ],
    linkstatic = True,
    visibility = ["//visibility:public"],
)

cc_test(
    name = 'hello_test',
    srcs = ['unit_test.cc'],
    deps = ['sample',
            '@com_google_googletest//:gtest_main']
)


