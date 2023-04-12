<!DOCTYPE html>
<html>
<body>
	<h1>Compiler Design</h1>
	<p>This repository contains the source code and documentation for a compiler design as a part of a course on Compiler Design.</p>
	<h2>Introduction</h2>
	<p>A compiler is a program that translates the source code written in a high-level programming language to its equivalent machine language representation. The process of designing a compiler involves several stages such as lexical analysis, syntax analysis, semantic analysis, code generation, and code optimization.</p>
	<p>This project aims to design a compiler for a simple programming language called "MiniC". The MiniC language is a subset of the C programming language, with a simplified syntax and limited functionality. The MiniC compiler is designed to generate assembly code for the x86 architecture.</p>
	<h2>Technologies Used</h2>
	<ul>
		<li>Flex: A lexical analyzer generator that generates a scanner based on regular expressions.</li>
		<li>Bison: A parser generator that generates a parser based on a context-free grammar.</li>
		<li>C: A general-purpose programming language used for implementing the compiler.</li>
		<li>windows: The operating system used for development and testing.</li>
	</ul>
	<h2>Getting Started</h2>
	<h3>Prerequisites</h3>
	<p>To run the MiniC compiler, you will need to have the following software installed on your system:</p>
	<ul>
		<li>Flex</li>
		<li>Bison</li>
		<li>GCC</li>
	</ul>
	<h3>Installation</h3>
	<p>To install the MiniC compiler, follow these steps:</p>
	<ol>
		<li>Clone the repository:</li>
		<pre><code>git clone https://github.com/suryanikhil-mallampalli/Compiler-Design.git</code></pre>
		<li>Navigate to the project directory:</li>
		<pre><code>cd Compiler-Design</code></pre>
		<li>Compile the source code using the makefile:</li>
		<pre><code>make</code></pre>
	</ol>
	<p>This will generate the executable file minic.</p>
	<h3>Usage</h3>
	<p>To use the MiniC compiler, follow these steps:</p>
	<ol>
		<li>Write a program in MiniC language and save it to a file with a .mc extension.</li>
		<li>Run the compiler on the program file using the following command:</li>
		<pre><code>./minic &lt;input-file&gt; -o &lt;output-file&gt;</code></pre>
		<p>For example:</p>
		<pre><code>./minic test.mc -o test.asm</code></pre>
		<p>This will generate the assembly code for the program in the file test.mc and save it to the file test.asm.</p>
		<li>To generate an executable file from the assembly code, use the following command:</li>
		<pre><code>gcc &lt;assembly-file&gt; -o &lt;output-file&gt;</code></pre>
		<p>For example:</p>
		<pre><code>gcc test.asm -o test</code></pre>
		<p>This will generate an executable file called test.</p>
	</ol>
	<h2>Features</h2>
    <ul>
      <li>Data types: int, float, and char</li>
      <li>Arithmetic and logical operations</li>
      <li>Control structures: if-else and while loops</li>
      <li>Functions with arguments and return values</li>
      <li>Arrays</li>
      <li>Pointers</li>
      <li>Typecasting</li>
    </ul>
   
<h2>License</h2>
<p>This project is licensed under the MIT License.</p>
</body>
