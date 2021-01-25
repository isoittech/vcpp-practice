# 3行目はadd_subdirectoryコマンドを使って、
# 先ほど書いた./uftree/CMakeLists.txtを取り込んでいます。 
# 感覚としては関数呼び出しのようなもので、3行目のタイミングで
# ./uftree/CMakeLists.txtの中身が実行され、その後に4,5行目が実行されます。
# 
# 5行目はmain_appがuftreeライブラリに依存していることを宣言しています。 
# この行のおかげで必ずuftree->main_appの順でビルドが行われ、
# main_appのビルド時にuftreeがリンクされるようになります。 
# また先ほどtarget_include_directories(uftree INTERFACE ...)コマンドを書いたので、
# main_appのコンパイル時にuftreeのインクルードディレクトリが
# インクルードされるようになります。

cmake_minimum_required(VERSION 3.1)

project(subdirectory_sample CXX)
add_subdirectory(./uftree)
add_executable(main_app main.cpp)
target_link_libraries(main_app uftree)

