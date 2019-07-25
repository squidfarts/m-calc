###################################################################################
#                                                                                 #
# NAME: src/main/meson.build                                                      #
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



exe_src = [ 'project.c', 'operations.c' ]


exe_lib = static_library('exe-lib', exe_src,    
    include_directories: exe_dir,
    install: true)

exe_dep = declare_dependency(
    version: meson.project_version(),
    link_with: exe_lib,
    include_directories: exe_dir)

exe_main = executable(meson.project_name(), 'main.c',
    dependencies: [ exe_dep ],
    install: true)

test('Test exe', exe_main)