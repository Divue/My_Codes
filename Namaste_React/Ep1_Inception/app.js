// React.createElement -> creats a obj

// const heading = React.createElement(
//   "h1",
//   { id: "heading", xyz: "abc" },
//   "Hello world from react"
// );                          //  IT IS AN OBJECT
// console.log(heading);      // RETURN AN OBJECT
// const root = ReactDOM.createRoot(document.getElementById("root"));

// root.render(heading);       // render converts the heading obj to h1 element




{
  /*  CREATE NESTED TAG  inside REACT

    <div id='parent'>
      <div id='child'>
        <h1>I am h1 tag</h1>
        <h2>I am h2 tag</h2>
      </div>
    </div> */
}
// const parent = React.createElement(
//   "div",
//   { id: "parent" },
//   React.createElement("div", { id: "child" }, [
//     React.createElement("h1", {}, "I am a h1 tag"),
//     React.createElement("h2", {}, "I am a h2 tag"),
//   ])
// );
// console.log(parent);
// const p = ReactDOM.createRoot(document.getElementById("root"));
// p.render(parent);






{
  /*  CREATE NESTED TAG  inside REACT

    <div id='parent'>
      <div id='child1'>
        <h1>I am h1 tag</h1>
        <h2>I am h2 tag</h2>
      </div>
      <div id='child2'>
        <h1>I am h1 tag</h1>
        <h2>I am h2 tag</h2>
      </div>
    </div> */
}
const parent = React.createElement(
  "div",
  { id: "parent" },
  [React.createElement("div", { id: "child1" }, [
    React.createElement("h1", {}, "I am a h1 tag"),
    React.createElement("h2", {}, "I am a h2 tag"),
  ]),
  React.createElement("div", { id: "child2" }, [
    React.createElement("h1", {}, "I am a h1 tag"),
    React.createElement("h2", {}, "I am a h2 tag"),
  ])]
);
console.log(parent);
const p = ReactDOM.createRoot(document.getElementById("root"));
p.render(parent);
