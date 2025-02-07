# RAII 阻碍尾递归优化的解决方案

## 原理

- 常规写法 见 [bad.c](./bad.hpp).
- 改进写法 见 [good.c](./good.hpp).

在以上两个示例中, 我们以 `std::string` 类型的临时变量为例.

## 运行

测试:

```bash
$ make
============================ Test ============================
./test-bad.exe; echo exited\($?\)
/bin/bash: line 1:  5086 Segmentation fault      ./test-bad.exe
exited(139)
--------------------------------------------------------------
./test-good.exe; echo exited\($?\)
exited(0)
============================ End =============================
```

清理临时文件和二进制文件:

```bash
make clean
```

___

&copy; 2025  谢骐 \<<shynur@outlook.com>\>.  All rights reserved.
