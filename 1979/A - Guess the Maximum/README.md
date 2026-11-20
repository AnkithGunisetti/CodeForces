<h2><a href="https://codeforces.com/contest/1979/problem/A" target="_blank" rel="noopener noreferrer">1979A — Guess the Maximum</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1979A](https://codeforces.com/contest/1979/problem/A) |

## Topics
`brute force` `greedy` `implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Guess the Maximum</div><div id="cf-note-wrapper" style="display: flex; align-items: center; justify-content: center; margin-top: 10px; width: 100%;"><button class="cf-ext-note-btn" style="border: 1px solid rgba(120, 120, 120, 0.25); background: rgba(255, 255, 255, 0.7); backdrop-filter: blur(8px); border-radius: 999px; padding: 7px 15px; font-size: 13px; cursor: pointer; color: rgb(51, 51, 51); box-shadow: rgba(0, 0, 0, 0.05) 0px 2px 10px;">📝 Add Note</button></div><div class="cf-ext-note-box" style="display: none; width: min(560px, 92%); margin: 14px auto 0px; padding: 14px; border-radius: 18px; border: 1px solid rgba(120, 120, 120, 0.18); background: rgba(255, 255, 255, 0.63); backdrop-filter: blur(10px); box-shadow: rgba(0, 0, 0, 0.05) 0px 8px 24px;"><textarea placeholder="Write your note..." class="cf-ext-note-textarea" style="width: 100%; min-height: 150px; resize: vertical; padding: 12px; box-sizing: border-box; border-radius: 14px; border: 1px solid rgba(120, 120, 120, 0.2); background: rgba(255, 255, 255, 0.75); font-size: 14px; outline: none;"></textarea><div style="display: flex; justify-content: flex-end; gap: 8px; margin-top: 10px;"><button class="cf-ext-note-btn cf-ext-note-btn-action" style="border: 1px solid rgba(120, 120, 120, 0.2); background: rgba(255, 255, 255, 0.72); border-radius: 999px; padding: 7px 14px; cursor: pointer; font-size: 13px; color: rgb(34, 34, 34); backdrop-filter: blur(8px);">Save</button><button class="cf-ext-note-btn cf-ext-note-btn-danger" style="border: 1px solid rgba(120, 120, 120, 0.2); background: rgba(255, 240, 240, 0.75); border-radius: 999px; padding: 7px 14px; cursor: pointer; font-size: 13px; color: rgb(176, 0, 32); backdrop-filter: blur(8px);">Delete</button></div></div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Alice and Bob came up with a rather strange game. They have an array of integers $$$a_1, a_2,\ldots, a_n$$$. Alice chooses a certain integer $$$k$$$ and tells it to Bob, then the following happens:</p><ul> <li> Bob chooses two integers $$$i$$$ and $$$j$$$ ($$$1 \le i  \lt  j \le n$$$), and then finds the maximum among the integers $$$a_i, a_{i + 1},\ldots, a_j$$$; </li><li> If the obtained maximum is <span class="tex-font-style-bf">strictly greater</span> than $$$k$$$, Alice wins, otherwise Bob wins. </li></ul><p>Help Alice find the maximum $$$k$$$ at which she is guaranteed to win.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test consists of multiple test cases. The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. The description of the test cases follows.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$2 \le n \le 5 \cdot 10^4$$$) — the number of elements in the array.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2,\ldots, a_n$$$ ($$$1 \le a_i \le 10^9$$$) — the elements of the array.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$5 \cdot 10^4$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output one integer — the maximum integer $$$k$$$ at which Alice is guaranteed to win.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009606252498126996" id="id003645507611030472" class="input-output-copier">Copy</div></div><pre data-content="6
4
2 4 1 7
5
1 2 3 4 5
2
1 1
3
37 8 16
5
10 10 10 10 9
10
3 12 9 5 2 3 2 9 8 2
" id="id009606252498126996"><div class="test-example-line test-example-line-even test-example-line-0">6</div><div class="test-example-line test-example-line-odd test-example-line-1">4</div><div class="test-example-line test-example-line-odd test-example-line-1">2 4 1 7</div><div class="test-example-line test-example-line-even test-example-line-2">5</div><div class="test-example-line test-example-line-even test-example-line-2">1 2 3 4 5</div><div class="test-example-line test-example-line-odd test-example-line-3">2</div><div class="test-example-line test-example-line-odd test-example-line-3">1 1</div><div class="test-example-line test-example-line-even test-example-line-4">3</div><div class="test-example-line test-example-line-even test-example-line-4">37 8 16</div><div class="test-example-line test-example-line-odd test-example-line-5">5</div><div class="test-example-line test-example-line-odd test-example-line-5">10 10 10 10 9</div><div class="test-example-line test-example-line-even test-example-line-6">10</div><div class="test-example-line test-example-line-even test-example-line-6">3 12 9 5 2 3 2 9 8 2</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0024504645677043313" id="id0045168653960452965" class="input-output-copier">Copy</div></div><pre id="id0024504645677043313">3
1
0
15
9
2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, all possible subsegments that Bob can choose look as follows: $$$[2, 4], [2, 4, 1], [2, 4, 1, 7], [4, 1], [4, 1, 7], [1, 7]$$$. The maximums on the subsegments are respectively equal to $$$4, 4, 7, 4, 7, 7$$$. It can be shown that $$$3$$$ is the largest integer such that any of the maximums will be strictly greater than it.</p><p>In the third test case, the only segment that Bob can choose is $$$[1, 1]$$$. So the answer is $$$0$$$.</p></div>