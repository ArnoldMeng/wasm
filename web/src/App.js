import React from 'react';
import './App.css';

const links = [
  'lenet',
  'lenet_asm',
  'prime',
  'prime_asm',
  'prime_js_good',
  'js_opt',
];

function App() {
  return (
    <div className="App">
      <header className="App-header">
        {
          links.map(name => (
            <a
              key={name}
              className="App-link"
              href={`http://localhost:3012/static/${name}.html`}
              // target="_blank"
              rel="noopener noreferrer"
            >
              {name}
            </a>
          ))
        }
      </header>
    </div>
  );
}

export default App;
