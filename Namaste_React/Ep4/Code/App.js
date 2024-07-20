import React, { Component } from "react";
import ReactDom from "react-dom/client";

// React Element  -> not readable or developer friendly
const heading = React.createElement("h1", { id: "heading" }, "Namaste React");
const root = ReactDom.createRoot(document.getElementById("root"));
root.render(heading);

// JSX -> HTML like but not html       (transpiled before it reaches the js by Parcel-Babel package)
const jsxHeading = (
  <h1 id="heading" className="head">
    Namaste React using JSX
  </h1>
);
console.log(jsxHeading);
root.render(jsxHeading);

// React Component
// 1. Class Based Component - OLD
// 2. Function Based Component - NEW        (a function that returns a jsx code)

const HeadingComponent = () => (
  <h1 className="heading">Namaste React Functional COmponent</h1>
);
const HeadingComponent2 = () => {
  return <h1 className="heading">Namaste React Functional COmponent</h1>;
};

const ComponentCompostiotn = () => {
  return (
    <div id="container">
      <HeadingComponent />
      <h1>
        this is a Component Composition which means rendering a Component inside
        another component
      </h1>
    </div>
  );
}; // IN ARROW FUNCTION I DO NOT NEEd TO WRITE RETURN
const ComponentCompostiotn2 = () => (
  <div id="container">
    {HeadingComponent()}
    <HeadingComponent />

    <h1>
      this is a Component Composition which means rendering a Component inside
      another component
    </h1>
  </div>
);

root.render(<ComponentCompostiotn />);
