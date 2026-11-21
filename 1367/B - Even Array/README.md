<h2><a href="https://codeforces.com/contest/1367/problem/B" target="_blank" rel="noopener noreferrer">1367B — Even Array</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1367B](https://codeforces.com/contest/1367/problem/B) |

## Topics
`greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Even Array</div><div id="cf-note-wrapper" style="display: flex; align-items: center; justify-content: center; margin-top: 10px; width: 100%;"><button class="cf-ext-note-btn" style="border: 1px solid rgba(120, 120, 120, 0.25); background: rgba(255, 255, 255, 0.7); backdrop-filter: blur(8px); border-radius: 999px; padding: 7px 15px; font-size: 13px; cursor: pointer; color: rgb(51, 51, 51); box-shadow: rgba(0, 0, 0, 0.05) 0px 2px 10px;">📝 Add Note</button></div><div class="cf-ext-note-box" style="display: none; width: min(560px, 92%); margin: 14px auto 0px; padding: 14px; border-radius: 18px; border: 1px solid rgba(120, 120, 120, 0.18); background: rgba(255, 255, 255, 0.63); backdrop-filter: blur(10px); box-shadow: rgba(0, 0, 0, 0.05) 0px 8px 24px;"><textarea placeholder="Write your note..." class="cf-ext-note-textarea" style="width: 100%; min-height: 150px; resize: vertical; padding: 12px; box-sizing: border-box; border-radius: 14px; border: 1px solid rgba(120, 120, 120, 0.2); background: rgba(255, 255, 255, 0.75); font-size: 14px; outline: none;"></textarea><div style="display: flex; justify-content: flex-end; gap: 8px; margin-top: 10px;"><button class="cf-ext-note-btn cf-ext-note-btn-action" style="border: 1px solid rgba(120, 120, 120, 0.2); background: rgba(255, 255, 255, 0.72); border-radius: 999px; padding: 7px 14px; cursor: pointer; font-size: 13px; color: rgb(34, 34, 34); backdrop-filter: blur(8px);">Save</button><button class="cf-ext-note-btn cf-ext-note-btn-danger" style="border: 1px solid rgba(120, 120, 120, 0.2); background: rgba(255, 240, 240, 0.75); border-radius: 999px; padding: 7px 14px; cursor: pointer; font-size: 13px; color: rgb(176, 0, 32); backdrop-filter: blur(8px);">Delete</button></div></div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a[0 \ldots n-1]$$$ of length $$$n$$$ which consists of non-negative integers. <span class="tex-font-style-bf">Note that array indices start from zero.</span></p><p>An array is called <span class="tex-font-style-it">good</span> if the parity of each index matches the parity of the element at that index. More formally, an array is good if for all $$$i$$$ ($$$0 \le i \le n - 1$$$) the equality $$$i \bmod 2 = a[i] \bmod 2$$$ holds, where $$$x \bmod 2$$$ is the remainder of dividing $$$x$$$ by 2.</p><p>For example, the arrays [$$$0, 5, 2, 1$$$] and [$$$0, 17, 0, 3$$$] are good, and the array [$$$2, 4, 6, 7$$$] is bad, because for $$$i=1$$$, the parities of $$$i$$$ and $$$a[i]$$$ are different: $$$i \bmod 2 = 1 \bmod 2 = 1$$$, but $$$a[i] \bmod 2 = 4 \bmod 2 = 0$$$.</p><p>In one move, you can take <span class="tex-font-style-bf">any</span> two elements of the array and swap them (these elements are not necessarily adjacent).</p><p>Find the minimum number of moves in which you can make the array $$$a$$$ good, or say that this is not possible.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases in the test. Then $$$t$$$ test cases follow.</p><p>Each test case starts with a line containing an integer $$$n$$$ ($$$1 \le n \le 40$$$) — the length of the array $$$a$$$.</p><p>The next line contains $$$n$$$ integers $$$a_0, a_1, \ldots, a_{n-1}$$$ ($$$0 \le a_i \le 1000$$$) — the initial array.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer — the minimum number of moves to make the given array $$$a$$$ good, or <span class="tex-font-style-tt">-1</span> if this is not possible.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008479330595620322" id="id005514998941045607" class="input-output-copier">Copy</div></div><pre id="id008479330595620322">4
4
3 2 7 6
3
3 2 6
1
7
7
4 9 2 1 18 3 0
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006561734541484523" id="id0024324862084285803" class="input-output-copier">Copy</div></div><pre id="id006561734541484523">2
1
-1
0
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, in the first move, you can swap the elements with indices $$$0$$$ and $$$1$$$, and in the second move, you can swap the elements with indices $$$2$$$ and $$$3$$$.</p><p>In the second test case, in the first move, you need to swap the elements with indices $$$0$$$ and $$$1$$$.</p><p>In the third test case, you cannot make the array good.</p></div>