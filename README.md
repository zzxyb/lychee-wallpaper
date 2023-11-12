# lychee-wallpaper
lychee-wallpaper is a wallpaper engine library , which is integrated with qtquick、opengl、vullkan technology.

## Installation
Run these commands to make install :
```shell
    mkdir build
    cd build
    cmake -DCMAKE_INSTALL_PREFIX=/usr -DCMAKE_BUILD_TYPE=Release ..
    // j8 mean 8 CPUs, which can be set freely according to the device hardware
    sudo make install -j8
```

## KTX
Run these commands to make install :
```shell
wget https://github.com/KhronosGroup/KTX-Software/archive/refs/tags/v4.2.0.zip
unzip v4.2.0.zip
cd ./KTX-Software-4.2.0
mkdir build
cd build
cmake -DCMAKE_INSTALL_PREFIX=/usr -DCMAKE_BUILD_TYPE=Release -D KTX_FEATURE_LOADTEST_APPS=ON -DKTX_FEATURE_DOC=ON -DKTX_FEATURE_TOOLS=OFF -DKTX_FEATURE_STATIC_LIBRARY=ON ..
make install

toktx --encode astc --astc_blk_d 6x6 --astc_mode ldr --genmipmap output.ktx test.png
```

### From Packages

### Compiling from Source
Install dependencies:

build dependencies(for arch linux):
* qt6-base
* [KTX-Software](https://github.com/KhronosGroup/KTX-Software)
* qt6-declarative

for doc:
* doxygen

## Configuration


## Running
ref example

## How to Contribute
* Contributing just involves sending a merge request.
* Note: rules are made to be broken. Adjust or ignore any/all of these as you see
fit, but be prepared to justify it to your peers.

### Code Style
* When modifying existing code, the current code style should be respected.
* New code: the part should follow the code style of Qt (https://wiki.qt.io/Qt_Coding_Style this link is for reference only. The actual Qt source code shall prevail)
* There is no absolute right or wrong code style, please consider the big picture, and do not rigidly stick to the small details

### Code Architecture Guidelines
* The code should be simple and easy to understand.
* Add comments to key nodes whether you change or add new code
* Security > Compatibility > Extensibility >= Performance

### Contribution Guideline
* Contribution steps.
    1. First login to your Github/Gitee account and fork the project
    2. Pull the forked project locally using `git clone`.
    3. Push the new commit to your project using `git push`.
    4. commit your code to the upstream project on Github/Gitee using the Pull Requese feature.
* commit message specification: align with Qt project, use English. Be sure to describe exactly what the commit "does" and "why it was made"
* A commit only does one thing, and the smaller the code changes, the easier it is to accept the commit. For larger code changes, try to split the commit into multiple commits (satisfying the git commit principle as a prerequisite)
* Please do your own testing and code review before committing the code, and submit the PR after confirming that the code is working correctly

## Roadmap
* Support third-party wallpaper engine access
* Support efficient image post-processing effects
* Support Vulkan rendering API under QRhi framework
