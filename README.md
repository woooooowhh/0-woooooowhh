# 2024 NEUQ 龙芯班第 0 次作业

本次作业的目的是让大家熟悉作业提交流程。使用 GitHub 的原因在于，我们希望大家能够熟练使用 Git。不管是在以后的学习，开发，比赛，还是工作中，都会用到 Git 这一工具。因此希望大家能够认真完成这次作业。

本次作业的目的不在于考验大家写代码的能力，因此题目非常简单。即使你不会写代码，通过查阅资料，你也能在短时间内完成这次作业。

## 作业内容

在本仓库的根目录下有一个 main.cpp` 文件，内容如下：

```cpp
#include ".assignment/test.h"

// 比较三个数的大小
Result CompareThreeNumbers(int a, int b, int c)
{
    // 在这里完成你的代码
}
```

你的任务是实现 `CompareThreeNumbers` 函数。该函数接收三个整数参数，返回一个 `Result` 结构体。`Result` 结构体定义如下：

```cpp
struct Result
{
    int min;
    int mid;
    int max;
};
```

最终你的代码可能像这样，你只需要给 `result` 的字段赋值即可：

```cpp
#include ".assignment/test.h"

// 比较三个数的大小
void CompareThreeNumbers(int a, int b, int c, Result& result)
{
    // 你的算法

    result.min = 最小值;
    result.mid = 中间值;
    result.max = 最大值;
}
```

## 注意事项

请确保你仅修改 `main.cpp` 文件，不要删除或修改其他文件。

`main.cpp` 文件中仅修改 `CompareThreeNumbers` 函数，或添加你的代码，不要删除已有代码。

测试运行时，应该通过**启动参数**而非**标准输入**传递测试数据。如果你不理解，可以跳过本地调试，直接提交代码。

## 作业提交
作业完成后，请使用 `git` 提交你的代码，并将提交的代码 push 到你的仓库中。提交后你可以去仓库的 GitHub 页面查看提交结果，确认提交成功。

提交后会自动检查你的代码，不过即使你的代码不正确，也不影响你的提交。

### 提交流程
如果你不熟悉 Git 的使用，可以参考以下步骤来完成本次作业：

#### 1. 克隆仓库到本地
```bash
git clone <领取作业时网页显示的仓库的网址>
# 样例：
# git clone https://github.com/Loongson-neuq/0-Cai1Hsu
```

#### 2. 编写代码

用你的编辑器打开 `main.cpp` 文件，实现 `CompareThreeNumbers` 函数，然后保存退出。

#### 3. 提交
```bash
# 添加修改
git add main.cpp
# 提交修改
git commit -m "完成作业"
# 推送到远程
git push origin master
```

#### 4. 查看提交结果

前往分配给你作业的仓库的 GitHub 页面，查看提交结果。

## 最后

对于 git 的使用疑问，可以查看 [https://manual.caiyi1.me/use-git/](https://manual.caiyi1.me/use-git/)，或者逮着群里会的同学问。

对于作业内容有疑问，可以在群里提问，或者逮着学长学姐问。
