#!/user/bin/env python3
###################################################################################
#                                                                                 #
# NAME: install.py                                                                #
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
import subprocess
import sys, os


subprocess.call("brew update", shell=True)
subprocess.call("brew install ninja", shell=True)

subprocess.call("pip3 install meson==0.50.0", shell=True)