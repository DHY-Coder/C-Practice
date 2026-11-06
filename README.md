# C-Practice

C 语言练习仓库：记录课堂练习、OJ 题目、易错点和每次提交。

## 目录

```text
C-Practice/
├─ basic/                  # 基础语法与 OJ 题
│  ├─ digit_reverse.c      # 数位统计与正/逆序输出
│  ├─ express_fee.c        # 快递费用计算
│  ├─ fail_count_range.c   # 不及格人数范围
│  └─ chicken_rabbit.c     # 鸡兔同笼
├─ notes/                  # 学习笔记
├─ .gitignore
└─ README.md
```

## 环境

- 学校教学：Dev-C++（自带 MinGW GCC）
- 命令行：GCC / Clang，C99 及以上

## 编译运行

Dev-C++：打开 `.c` 文件，按 `F11` 编译运行。

命令行：

```bash
gcc basic/digit_reverse.c -o digit_reverse.exe
./digit_reverse.exe
```

## 题目记录

| 文件 | 题目 | 知识点 |
|---|---|---|
| `basic/digit_reverse.c` | 数位统计与正/逆序输出 | 循环、取余、整除、数位分解 |
| `basic/express_fee.c` | 快递费用计算 | 字符输入、`ceil`、分段计价 |
| `basic/fail_count_range.c` | 不及格人数范围 | 最大值/最小值、容斥思想 |
| `basic/chicken_rabbit.c` | 鸡兔同笼 | 整数除法、取余、边界情况 |

## 约定

- 新题先放 `basic/`；题多了再按周或专题拆分。
- 文件名使用英文小写 + 下划线，例如 `digit_reverse.c`。
- 提交信息使用前缀：`feat:`、`fix:`、`docs:`、`refactor:`。
- 不提交 `.exe`、`.o` 等编译产物。
- 每道题在 `notes/` 里记录：思路、踩坑、复杂度。

## 进度

- [x] 数位统计与正/逆序输出
- [x] 快递费用计算
- [x] 不及格人数范围
- [x] 鸡兔同笼
