# 🏠 宿舍学习资源共享平台

基于 **MkDocs + Material for MkDocs** 构建的 AI 专业学习资源共享网站，托管于 **GitHub Pages**。

## 🚀 快速开始

### 本地预览

```bash
# 安装依赖
pip install -r requirements.txt

# 启动本地预览服务器
mkdocs serve
```

浏览器打开 `http://127.0.0.1:8000/` 即可预览。

### 构建静态站点

```bash
mkdocs build
```

构建产物在 `site/` 目录下。

## 📂 项目结构

```
dorm-study-hub/
├── mkdocs.yml              # MkDocs 配置文件
├── requirements.txt        # Python 依赖
├── .github/workflows/      # GitHub Actions 自动部署
│   └── ci.yml
└── docs/                   # 网站内容（Markdown）
    ├── index.md            # 首页
    ├── 大一课程/            # 大一课程资料
    ├── 大二课程/            # 大二课程资料
    ├── 通识课/              # 通识课资料
    ├── 竞赛/                # 竞赛指南
    └── 课表/                # 课程表
```

## 📤 如何贡献

1. Fork 本仓库
2. 在 `docs/` 下找到对应课程文件夹
3. 上传资料，更新对应 Markdown 页面
4. 提交 Pull Request

详见 [参与贡献](docs/参与贡献.md)。

## 📄 许可证

本站内容仅供学习交流使用。
