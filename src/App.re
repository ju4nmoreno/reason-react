let component = ReasonReact.statelessComponent("App");

let make = (_) => {
  ...component,
  render: _ => <h1> (ReasonReact.string("Hello Worldy")) </h1>
}