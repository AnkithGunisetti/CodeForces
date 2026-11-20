<h2><a href="https://codeforces.com/contest/1703/problem/F" target="_blank" rel="noopener noreferrer">1703F — Yet Another Problem About Pairs Satisfying an Inequality</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1703F](https://codeforces.com/contest/1703/problem/F) |

## Topics
`binary search` `data structures` `dp` `greedy` `sortings`

---

## Problem Statement

<div class="header"><div class="title">F. Yet Another Problem About Pairs Satisfying an Inequality</div><div id="cf-note-wrapper" style="display: flex; align-items: center; justify-content: center; margin-top: 10px; width: 100%;"><button class="cf-ext-note-btn" style="border: 1px solid rgba(120, 120, 120, 0.25); background: rgba(255, 255, 255, 0.7); backdrop-filter: blur(8px); border-radius: 999px; padding: 7px 15px; font-size: 13px; cursor: pointer; color: rgb(51, 51, 51); box-shadow: rgba(0, 0, 0, 0.05) 0px 2px 10px;">📝 Add Note</button></div><div class="cf-ext-note-box" style="display: none; width: min(560px, 92%); margin: 14px auto 0px; padding: 14px; border-radius: 18px; border: 1px solid rgba(120, 120, 120, 0.18); background: rgba(255, 255, 255, 0.63); backdrop-filter: blur(10px); box-shadow: rgba(0, 0, 0, 0.05) 0px 8px 24px;"><textarea placeholder="Write your note..." class="cf-ext-note-textarea" style="width: 100%; min-height: 150px; resize: vertical; padding: 12px; box-sizing: border-box; border-radius: 14px; border: 1px solid rgba(120, 120, 120, 0.2); background: rgba(255, 255, 255, 0.75); font-size: 14px; outline: none;"></textarea><div style="display: flex; justify-content: flex-end; gap: 8px; margin-top: 10px;"><button class="cf-ext-note-btn cf-ext-note-btn-action" style="border: 1px solid rgba(120, 120, 120, 0.2); background: rgba(255, 255, 255, 0.72); border-radius: 999px; padding: 7px 14px; cursor: pointer; font-size: 13px; color: rgb(34, 34, 34); backdrop-filter: blur(8px);">Save</button><button class="cf-ext-note-btn cf-ext-note-btn-danger" style="border: 1px solid rgba(120, 120, 120, 0.2); background: rgba(255, 240, 240, 0.75); border-radius: 999px; padding: 7px 14px; cursor: pointer; font-size: 13px; color: rgb(176, 0, 32); backdrop-filter: blur(8px);">Delete</button></div></div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a_1, a_2, \dots a_n$$$. Count the number of pairs of indices $$$1 \leq i, j \leq n$$$ such that $$$a_i  \lt  i  \lt  a_j  \lt  j$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 1000$$$) — the number of test cases.</p><p>The first line of each test case contains an integer $$$n$$$ ($$$2 \leq n \leq 2 \cdot 10^5$$$) — the length of the array.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$0 \leq a_i \leq 10^9$$$) — the elements of the array.</p><p>It is guaranteed that the sum of $$$n$$$ across all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer — the number of pairs of indices satisfying the condition in the statement.</p><p>Please note, that the answer for some test cases won't fit into 32-bit integer type, so you should use at least 64-bit integer type in your programming language (like <span class="tex-font-style-tt">long long</span> for C++).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009476553886558328" id="id007000837164907255" class="input-output-copier">Copy</div></div><pre data-content="5
8
1 1 2 3 8 2 1 4
2
1 2
10
0 2 1 6 3 4 1 2 8 3
2
1 1000000000
3
0 1000000000 2
" id="id009476553886558328"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">8</div><div class="test-example-line test-example-line-odd test-example-line-1">1 1 2 3 8 2 1 4</div><div class="test-example-line test-example-line-even test-example-line-2">2</div><div class="test-example-line test-example-line-even test-example-line-2">1 2</div><div class="test-example-line test-example-line-odd test-example-line-3">10</div><div class="test-example-line test-example-line-odd test-example-line-3">0 2 1 6 3 4 1 2 8 3</div><div class="test-example-line test-example-line-even test-example-line-4">2</div><div class="test-example-line test-example-line-even test-example-line-4">1 1000000000</div><div class="test-example-line test-example-line-odd test-example-line-5">3</div><div class="test-example-line test-example-line-odd test-example-line-5">0 1000000000 2</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005758551477053365" id="id007565257188204519" class="input-output-copier">Copy</div></div><pre id="id005758551477053365">3
0
10
0
1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>For the first test cases the pairs are $$$(i, j)$$$ = $$$\{(2, 4), (2, 8), (3, 8)\}$$$. </p><ul> <li> The pair $$$(2, 4)$$$ is true because $$$a_2 = 1$$$, $$$a_4 = 3$$$ and $$$1  \lt  2  \lt  3  \lt  4$$$. </li><li> The pair $$$(2, 8)$$$ is true because $$$a_2 = 1$$$, $$$a_8 = 4$$$ and $$$1  \lt  2  \lt  4  \lt  8$$$. </li><li> The pair $$$(3, 8)$$$ is true because $$$a_3 = 2$$$, $$$a_8 = 4$$$ and $$$2  \lt  3  \lt  4  \lt  8$$$. </li></ul></div>