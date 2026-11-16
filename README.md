# heXcore

### Computer Science Problem & Solution Archive

A collection of programming problems, worked solutions, and study notes covering core Computer Science subjects.

**[Explore the Website](https://hexcore99.github.io/)** · **[Browse the Source](https://github.com/HexCore99/hexcore99.github.io)**

## About

**heXcore** is my personal, publicly accessible collection of course exercises, programming solutions, and study materials. I created it to keep useful problems organized and make them easier to revisit and share with other students.

The content is written mainly in **C, C++, and Java**, with explanations, code snippets, and problem illustrations where applicable.

## What's Inside

| Section | Topics |
| --- | --- |
| **Structured Programming (SPL)** | Loops, nested loops, 1D/2D arrays, strings, functions, pointers, structures, recursion, and past exam solutions |
| **Object-Oriented Programming (OOP)** | Java programming exercises and midterm/final exam solutions |
| **Data Structures & Algorithms (DSA)** | Sorting, searching, linked lists, and graph problems |
| **Theory of Computation (TOC)** | Context-Free Grammars (CFG) and conversion to Chomsky Normal Form (CNF) |

Some pages include problem images and multiple code examples to make the solutions easier to follow.

## Built With

- **[VitePress](https://vitepress.dev/)** — Static documentation site generator
- **Markdown** — Notes, exercises, and code snippets
- **[Shiki](https://shiki.style/)** — Syntax highlighting
- **[MathJax](https://www.mathjax.org/)** — Mathematical notation support via `markdown-it-mathjax3`
- **GitHub Pages + GitHub Actions** — Automated site deployment

## Run Locally

**Prerequisites:** Node.js 20 or later and npm.

```bash
git clone https://github.com/HexCore99/hexcore99.github.io.git
cd hexcore99.github.io
npm ci
npm run docs:dev
```

Open the local URL printed by VitePress (typically `http://localhost:5173/`).

To build and preview the production site:

```bash
npm run docs:build
npm run docs:preview
```

## Repository Structure

```text
.
├── .github/workflows/   # GitHub Pages deployment workflow
├── .vitepress/          # Site configuration and theme
├── SPL/                 # Structured programming exercises and solutions
├── OOP/                 # Object-oriented programming solutions
├── DSA/                 # Data structures and algorithms
├── TOC/                 # Theory of Computation notes
├── index.md             # Landing page
└── package.json         # Dependencies and development scripts
```

## Deployment

The site is published through **GitHub Pages**. The [deployment workflow](https://github.com/HexCore99/hexcore99.github.io/blob/main/.github/workflows/deploy.yml) builds the VitePress site and deploys it whenever changes are pushed to the `main` branch. It can also be triggered manually from GitHub Actions.

## Feedback

Spotted a mistake or have an improvement to suggest? Feel free to [open an issue](https://github.com/HexCore99/hexcore99.github.io/issues) or submit a pull request.

## Author

**Siabul Hassan** · [GitHub](https://github.com/HexCore99) · [Portfolio](https://www.siabulhassan.xyz/)

## License

This repository is licensed under the [MIT License](https://github.com/HexCore99/hexcore99.github.io/blob/main/LICENSE).
