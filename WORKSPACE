workspace(name = "coverage_test")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")


http_archive(
  name = "com_google_googletest",
  urls = ["https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip"],
  strip_prefix = "googletest-609281088cfefc76f9d0ce82e1ff6c30cc3591e5",
)

http_archive(
    name = "eigen",
    urls = ["https://bitbucket.org/eigen/eigen/get/3.3.7.tar.gz"],
    sha256 = "7e84ef87a07702b54ab3306e77cea474f56a40afa1c0ab245bb11725d006d0da",
    build_file = "//autonomy/external_deps:BUILD.eigen",
)