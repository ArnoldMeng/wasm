关于WebAssembly的简单尝试，详情参考wasm.pptx

使用方法
启动静态资源服务器： node server.js
编译cpp文件：  npm run wasm [filename] ；例如 npm run wasm prime 将会把src/prime.cpp编译为wasm
其他使用方法可参考ppt和package.json的脚本