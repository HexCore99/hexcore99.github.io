---
layout: home
sidebar: false
---

<div class="button-container">
  <div class="top-buttons">
    <!-- <button class="button-85" role="button">My Project</button> -->
    <a href="SPL/loops/singleLoop"> <button class="button-85" role="button">Problem Sets</button></a> 
  </div>
  <div class="bottom-button">
    <button class="button-85" role="button">About</button>
  </div>
</div>

<style>
/* Existing styles for button-container, top-buttons, bottom-button... */

/* New button-85 styles */
.button-85 {
  padding: 0.6em 2em;
  border: none;
  outline: none;
  color: rgb(255, 255, 255);
  background: #111;
  cursor: pointer;
  position: relative;
  z-index: 0;
  border-radius: 10px;
  user-select: none;
  -webkit-user-select: none;
  touch-action: manipulation;
}

.button-85:before {
  content: "";
  background: linear-gradient(45deg, #ff0000, #ff7300, #fffb00, #48ff00, #00ffd5, #002bff, #7a00ff, #ff00c8, #ff0000);
  position: absolute;
  top: -2px;
  left: -2px;
  background-size: 400%;
  z-index: -1;
  filter: blur(5px);
  -webkit-filter: blur(5px);
  width: calc(100% + 4px);
  height: calc(100% + 4px);
  animation: glowing-button-85 20s linear infinite;
  transition: opacity 0.3s ease-in-out;
  border-radius: 10px;
}

@keyframes glowing-button-85 {
  0% { background-position: 0 0; }
  50% { background-position: 400% 0; }
  100% { background-position: 0 0; }
}

.button-85:after {
  z-index: -1;
  content: "";
  position: absolute;
  width: 100%;
  height: 100%;
  background: #222; /* Dark background */
  left: 0;
  top: 0;
  border-radius: 10px;
}

/* Button Container Styling */
.button-container {
  display: flex;
  flex-direction: column; /* Stack buttons vertically */
  justify-content: center; /* Center vertically */
  align-items: center; /* Center horizontally */
  height: 90vh; /* Full viewport height */
}

/* Top Buttons Spacing */
.top-buttons {
  display: flex;
  gap: 40px; /* Increased gap for more spacing */
  
}
.bottom-button {
  margin-top: 80px; /* Adjust the value as needed */
}

</style>
