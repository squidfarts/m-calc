###################################################################################
#                                                                                 #
# NAME: src/meson.build                                                           #
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



subdir('include')
subdir('main')

if get_option('with_tests').enabled()
    subdir('test')
endif