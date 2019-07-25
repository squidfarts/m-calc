#!/user/bin/env python3
###################################################################################
#                                                                                 #
# NAME: test.py                                                                   #
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
import subprocess, os

subprocess.call('ninja test -C build_dir', shell=True)
