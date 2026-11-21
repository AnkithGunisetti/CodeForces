<h2><a href="https://codeforces.com/contest/1929/problem/A" target="_blank" rel="noopener noreferrer">1929A — Sasha and the Beautiful Array</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1929A](https://codeforces.com/contest/1929/problem/A) |

## Topics
`constructive algorithms` `greedy` `math` `sortings`

---

## Problem Statement

<div class="header"><div class="title">A. Sasha and the Beautiful Array</div><div id="cf-note-wrapper" style="display: flex; align-items: center; justify-content: center; margin-top: 10px; width: 100%;"><button class="cf-ext-note-btn" style="border: 1px solid rgba(120, 120, 120, 0.25); background: rgba(255, 255, 255, 0.7); backdrop-filter: blur(8px); border-radius: 999px; padding: 7px 15px; font-size: 13px; cursor: pointer; color: rgb(51, 51, 51); box-shadow: rgba(0, 0, 0, 0.05) 0px 2px 10px;">📝 Add Note</button></div><div class="cf-ext-note-box" style="display: none; width: min(560px, 92%); margin: 14px auto 0px; padding: 14px; border-radius: 18px; border: 1px solid rgba(120, 120, 120, 0.18); background: rgba(255, 255, 255, 0.63); backdrop-filter: blur(10px); box-shadow: rgba(0, 0, 0, 0.05) 0px 8px 24px;"><textarea placeholder="Write your note..." class="cf-ext-note-textarea" style="width: 100%; min-height: 150px; resize: vertical; padding: 12px; box-sizing: border-box; border-radius: 14px; border: 1px solid rgba(120, 120, 120, 0.2); background: rgba(255, 255, 255, 0.75); font-size: 14px; outline: none;"></textarea><div style="display: flex; justify-content: flex-end; gap: 8px; margin-top: 10px;"><button class="cf-ext-note-btn cf-ext-note-btn-action" style="border: 1px solid rgba(120, 120, 120, 0.2); background: rgba(255, 255, 255, 0.72); border-radius: 999px; padding: 7px 14px; cursor: pointer; font-size: 13px; color: rgb(34, 34, 34); backdrop-filter: blur(8px);">Save</button><button class="cf-ext-note-btn cf-ext-note-btn-danger" style="border: 1px solid rgba(120, 120, 120, 0.2); background: rgba(255, 240, 240, 0.75); border-radius: 999px; padding: 7px 14px; cursor: pointer; font-size: 13px; color: rgb(176, 0, 32); backdrop-filter: blur(8px);">Delete</button></div></div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Sasha decided to give his girlfriend an array $$$a_1, a_2, \ldots, a_n$$$. He found out that his girlfriend evaluates the <span class="tex-font-style-it">beauty</span> of the array as the sum of the values $$$(a_i - a_{i - 1})$$$ for all integers $$$i$$$ from $$$2$$$ to $$$n$$$.</p><p>Help Sasha and tell him the maximum beauty of the array $$$a$$$ that he can obtain, if he can rearrange its elements in any way.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test consists of multiple test cases. The first line contains a single integer $$$t$$$ ($$$1 \le t \le 500$$$) — the number of test cases. The description of the test cases follows.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$2 \leq n \leq 100$$$) — the length of the array $$$a$$$.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \leq a_i \leq 10^9$$$) — the elements of the array $$$a$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer — the maximum beauty of the array $$$a$$$ that can be obtained.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007359597507374739" id="id007820313977158901" class="input-output-copier">Copy</div></div><pre data-content="5
3
2 1 3
3
69 69 69
5
100 54 80 43 90
4
3 4 3 3
2
2 1
" id="id007359597507374739"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">3</div><div class="test-example-line test-example-line-odd test-example-line-1">2 1 3</div><div class="test-example-line test-example-line-even test-example-line-2">3</div><div class="test-example-line test-example-line-even test-example-line-2">69 69 69</div><div class="test-example-line test-example-line-odd test-example-line-3">5</div><div class="test-example-line test-example-line-odd test-example-line-3">100 54 80 43 90</div><div class="test-example-line test-example-line-even test-example-line-4">4</div><div class="test-example-line test-example-line-even test-example-line-4">3 4 3 3</div><div class="test-example-line test-example-line-odd test-example-line-5">2</div><div class="test-example-line test-example-line-odd test-example-line-5">2 1</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00633192045616331" id="id006819138510762623" class="input-output-copier">Copy</div></div><pre id="id00633192045616331">2
0
57
1
1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, the elements of the array $$$a$$$ can be rearranged to make $$$a = [1, 2, 3]$$$. Then its beauty will be equal to $$$(a_2 - a_1) + (a_3 - a_2) = (2 - 1) + (3 - 2) = 2$$$.</p><p>In the second test case, there is no need to rearrange the elements of the array $$$a$$$. Then its beauty will be equal to $$$0$$$.</p></div>