# IAM (I AM) — Digital Legacy Guardian

**IAM** is a high-performance, local AI companion designed to capture and preserve human experience. It functions as a digital legacy, allowing thoughts and knowledge to be passed down through generations.

## 🚀 Vision & Mission
"I will live even when I am no longer physically here." 
IAM is built to be a moral and intellectual reflection of its user. It’s not just an assistant; it’s a guardian of your path, decisions, and wisdom.

### Tech Stack:
* **Core Engine:** Native C++ (Focusing on high-performance memory management and local inference).
* **Interface:** C# / WPF (Modern, robust Windows desktop experience).
* **AI Architecture:** RAG (Retrieval-Augmented Generation) & Temporal Awareness.
* **Math Foundation:** Linear Algebra from scratch for vector processing.

## 🏗 Project Structure & Current Progress
The system is built with a modular, engine-based architecture:

- [x] **Math Engine (`iam/math_engine`):** Custom C++ implementation of linear algebra (dot products, magnitudes, matrix operations) for handling embeddings.
- [x] **Sorting Engine:** Custom high-performance Merge Sort implementation for efficient data organization.
- [x] **Search Engine (`iam/search_engine`):** Efficient O(log n) retrieval using Binary Search over sorted memory keys.
- [ ] **LLM Integration:** Implementing `llama.cpp` for local, private inference.
- [ ] **Temporal Awareness:** Logic for tracking significant life milestones and dates.
- [ ] **Moral Core:** An ethical framework integrated into the AI's decision-making process to ensure human-centric values.

* `iam/math_engine`: Low-level linear algebra routines for handling high-dimensional vectors.
* `iam/sorting_engine`: Optimized sorting algorithms for large-scale data management.
* `iam/search_engine`: The "Retriever" component. Implements efficient binary search algorithms to access stored personality data with O(log n) complexity.

## 📜 Principles

1. **Humanity First:** The machine does not control the person; it serves as a loyal keeper of their essence.
2. **Moral Integrity:** IAM possesses a "moral core" that adapts to the user while maintaining its own fundamental ethical values.
3. **High Performance:** A zero-compromise C++ core ensures efficient local LLM inference and data processing.
