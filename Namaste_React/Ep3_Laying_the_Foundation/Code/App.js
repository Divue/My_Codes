import React from "react";
import ReactDom from "react-dom/client";

// React Element  -> not readable or developer friendly
const heading = React.createElement("h1", { id: "heading" }, "Namaste React");
const root = ReactDom.createRoot(document.getElementById("root"));
root.render(heading);

// JSX -> HTML like but not html
const jsxHeading = <h1 id="heading">Namaste React using JSX</h1>
console.log(jsxHeading)