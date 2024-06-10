---
layout: home
sidebar: false
---
<div class="button-container">
  <div class="top-buttons">
    <a href="/MyProjects/MyProject" class="button">My Project</a>
    <a href="/loops/singleLoop" class="button">Problem Sets</a>
  </div>
  <div class="bottom-button">
    <a href="/about" class="button">About</a>
  </div>
</div>

<style>
.button-container {
  display: flex;
  flex-direction: column;
  align-items: center;
  justify-content: center;
  height: 100vh;
}

.top-buttons {
  display: flex;
  flex-direction: row;
  align-items: center;
  justify-content: center;
  margin-bottom: 80px; /* Space between top buttons and bottom button */
}

.button {
  margin: 10px;
  padding: 10px 20px;
  font-size: 16px;
  color: white;
  background-color:#2599b6;
  border: none;
  border-radius: 5px;
  cursor: pointer;
  text-align: center;
  text-decoration: none;
}

.button:hover {
  background-color: lightgray;
}

/* Remove underline from links */
.button a {
  text-decoration: none;
  color: inherit; /* Ensure the color is inherited from the parent */
}

.button a:hover {
  text-decoration: none;
  color: inherit;
}
</style>
