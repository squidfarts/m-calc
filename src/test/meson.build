###################################################################################
#                                                                                 #
# NAME: src/test/meson.build                                                      #
#                                                                                 #
# AUTHOR: Michael Brockus.                                                        #
#                                                                                 #
# CONTACT: <mailto:michael@squidfarts.com>                                        #
#                                                                                 #
# NOTICES:                                                                        #
#                                                                                 #
# License: MIT                                                                    #
#                                                                                 #
###################################################################################



test_exe = executable('exe-test',
    sources: [ 'test.c', 'test_runner.c' ],
    dependencies: [ unity_dep, exe_dep ])



#
# executable target test cases
#
test('running unit test.', test_exe)
