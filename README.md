from textwrap import dedent

content = dedent(r'''
# 👋 Hi, I'm Abiram Mandava

<div align="center">

<img src="https://capsule-render.vercel.app/api?type=venom&color=0:0f0f23,50:1a1a3e,100:0f0f23&height=220&section=header&text=Abiram%20Mandava&fontSize=54&fontColor=e8d5ff&fontAlignY=38&desc=Final-year%20AI%20%26%20Data%20Science%20Student&descAlignY=62&descSize=16" width="100%"/>

<img src="https://readme-typing-svg.demolab.com?font=JetBrains+Mono&weight=500&size=18&pause=1200&color=B794F4&center=true&vCenter=true&width=700&lines=Building+production-grade+AI+systems;RAG+%E2%80%A2+LLMs+%E2%80%A2+Agents+%E2%80%A2+FastAPI;Learning+by+building+real+projects;Open+to+AI+Engineer+roles"/>

</div>

---

## 🚀 About Me

I'm a final-year **B.Tech AI & Data Science** student at **KL University** with a strong interest in building production-ready AI systems.

Rather than focusing only on ML models, I enjoy building complete AI products—from document ingestion and retrieval pipelines to agentic workflows, APIs, and user interfaces.

- 🎓 Final-year AI & DS Student
- 🔬 Research Intern @ IIIT Hyderabad (iHUB DATA)
- ☁️ AWS Certified Developer Associate
- ☁️ AWS Certified Cloud Practitioner
- 💼 Open to AI Engineer opportunities

---

## 🎯 Current Focus

- Building **Jignasa**, a local-first AI assistant
- Production RAG
- Agentic AI
- LangChain
- LangGraph
- Model Context Protocol (MCP)
- FastAPI
- Docker

---

## 🏆 Certifications

<div align="center">

<a href="https://www.credly.com/badges/88c9abf6-b877-4149-a5de-5b063144e366">
<img src="https://images.credly.com/size/160x160/images/b9feab85-1a43-4f6c-99a5-631b88d5461b/image.png" width="120"/>
</a>

&nbsp;&nbsp;&nbsp;

<a href="https://www.credly.com/badges/aff90264-6f61-494a-b620-d7017c7754ee">
<img src="https://images.credly.com/size/160x160/images/00634f82-b07f-4bbd-a6bb-53de397fc3a6/image.png" width="120"/>
</a>

</div>

---

## ⭐ Featured Projects

| Project | Description | Tech |
|---------|-------------|------|
| **Jignasa** | Local-first RAG assistant with multi-mode search, ReAct agents and streaming | FastAPI • React • LangChain • FAISS • Ollama |
| **Handwritten Digit Recognition** | CNN model deployed using Django | TensorFlow • Django |
| **Image Colorization** | U-Net based grayscale image colorization | TensorFlow • OpenCV |
| **SpaceLearn** | AI-powered learning assistant | React • LLM APIs |

---

## 🛠 Tech Stack

### 🤖 AI / ML

- RAG
- LLMs
- LangChain
- LangGraph
- Ollama
- FAISS
- Transformers
- RAGAS

### ⚙️ Backend

- Python
- FastAPI
- Django
- REST APIs
- SSE Streaming

### 🌐 Frontend

- React
- HTML
- CSS

### ☁️ Cloud & DevOps

- AWS
- Docker

### 💾 Database

- SQLite

### 🧰 Tools

- Git
- Linux
- VS Code

---

## 📊 GitHub Stats

<div align="center">

<img height="165" src="https://github-readme-stats.vercel.app/api?username=Abiram116&show_icons=true&hide_border=true&count_private=true"/>

<img height="165" src="https://github-readme-streak-stats.herokuapp.com/?user=Abiram116&hide_border=true"/>

<br><br>

<img width="95%" src="https://github-readme-activity-graph.vercel.app/graph?username=Abiram116&theme=github-compact&hide_border=true"/>

</div>

---

## 📫 Connect With Me

<div align="center">

<a href="https://www.linkedin.com/in/sree-abiram-mandava-86b5a528b/">
<img src="https://img.shields.io/badge/LinkedIn-0A66C2?style=for-the-badge&logo=linkedin"/>
</a>

<a href="mailto:sreeabirammandava@gmail.com">
<img src="https://img.shields.io/badge/Email-EA4335?style=for-the-badge&logo=gmail"/>
</a>

<a href="https://personal-portfolio-1nkd.onrender.com">
<img src="https://img.shields.io/badge/Portfolio-000000?style=for-the-badge&logo=vercel"/>
</a>

</div>

---

<div align="center">

### *"Understand it under the hood, then build it."*

Thanks for stopping by!

</div>
''')

path="/mnt/data/README.md"
with open(path,"w",encoding="utf-8") as f:
    f.write(content)

print(path)
