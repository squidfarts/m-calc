# ***C Project***

#### **Status**

[![GitHub](https://img.shields.io/github/license/squidfarts/c-project.svg?color=blue)](https://github.com/squidfarts/c-project)
[![Travis](https://travis-ci.com/squidfarts/c-project.svg?branch=master)](https://travis-ci.org/squidfarts/c-project)
[![Appveyor](https://ci.appveyor.com/api/projects/status/lh6a93nw50rxq3f7/branch/master?svg=true)](https://ci.appveyor.com/project/squidfarts/c-project) 

## **Description**
==========================

Banana bread.  A project template for a new C based project using Meson build system.


## **About**
==========================

***C Project*** is a project template that was designed to use Meson out of the box, 
a suitable tempallate for your programming needs.  This was designed,  battle tested 
and deployed from a multi language codebase where the current languages are C, C++,
Dlang, Kotlin and Python. 

I will only design templates that follow with what I am trying to accomplish which is 
to build a healthy ecosystem where programming languages can work together 
without pulling apart or blowing up my codebase, I also find it easy to do my classes 
by simply copying a new template in place and start working on my challenge or to 
follow along with an example program and to use when I would like to try out some 
new experiment.

The design of each template is meant to be a live demonstration of a will structured
GitHub project and something that can be reference so I don’t have to copy and paste
on other platforms such as Reddit, Stack Overflow, Linkedin and The D forum.  All seems 
good however nothing is truly safe from hackers and bug free so best practices for 
security will be incorporated as part of the work flow while developing the project.


## **Features**
==========================

- Meson as the main tool for generating ninja build files.
- Conan as the tool for managing and packaging.
- Simple project structure just for you. 
- Distributed under the MIT license.
- Works 99.95% out of the box.


## **Required tools**
==========================

- [Meson](https://github.com/mesonbuild/meson.git) version 0.50.0 or newer.
- [Python 3](https://python.org) version 3.5.x or newer.


## **Downloading**
==========================

To install this project the simplest way is to grab it off github with
this command the Github command looks something like this:

```console
git clone https://github.com/squidfarts/c-project.git
```
You can also download it as a zip if you prefer.


## **Build and install**
==========================

## **Setting up Meson.**

Meson is a build system that is designed to be as user-friendly as possible without 
sacrificing performance. The main tool for this is a custom language that the user 
uses to describe the structure of his build. The main design goals of this language 
has been simplicity, clarity and conciseness. Much inspiration was drawn from the 
Python programming language, which is considered very readable, even to people 
who have not programmed in Python before.

Another main idea has been to provide first class support for modern programming
tools and best practices. These include features as varied as unit testing, code 
coverage reporting, precompiled headers and the like. All of these features should 
be immediately available to any project using Meson. The user should not need to 
hunt for third party macros or write shell scripts to get these features. They should 
just work out of the box.

This power should not come at the expense of limited usability. Many software builds 
require unorthodox steps. A common example is that you first need to build a custom
tool and then use that tool to generate more source code to build. This functionality 
needs to be supported and be as easy to use as other parts of the system.

*Meson* has two main dependencies.

- [Python 3](https://python.org)
- [Ninja](https://github.com/ninja-build/ninja/)

If you will only use the Visual Studio backend (--backend=vs) to generate Visual Studio
solutions on Windows or the XCode backend (--backend=xcode) to generate XCode 
projects on macOS, you do not need Ninja.


## **Running Meson**

Meson requires that you have a source directory and a build directory and that these
two are different. In your source root must exist a file called 'meson.build'. To generate
the build system run this command:

```console
meson <source directory> <build directory>
```

Depending on how you obtained Meson the command might also be called `meson.py`
instead of plain `meson`. In the rest of this document we are going to use the letter form.


## **Configuring the build directory**

Let us assume that we have a source tree that has a Meson build system. This means
that at the topmost directory has a file called meson.build. We run the following
commands to get the build started.

```console
meson setup <build dir name>
```

The main usability difference between Ninja and Make is that Ninja will automatically
detect the number of CPUs in your computer and parallelize itself accordingly. You can
override the amount of parallel processes used with the command line argument
-j <num processes>.

## **Building from the source**

Meson uses the Ninja build system to actually build the code. To start the build, simply type 
the following command.

```console
ninja -C <build dir name>
```

## **Running tests**

Meson provides native support for running tests. The command to do that is simple.

```console
meson test -C <build dir name> --num-processes
```

## **Installing**

Installing the built software with Meson is just as simple as.

```console
meson install -C <build dir name>
```

This should build the project and install the project.


## **Contact**
==========================

#### **Developer and maintainer**

- gmail : [Squidfarts GMail](mailto:michaelbrockus@gmail.com)
- email : [Squidfarts EMail](mailto:michael@squidfarts)

***Happy planing.  Happy coding...***
