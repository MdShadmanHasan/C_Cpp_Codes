<span style="color: #004a43">#</span><span style="color: #004a43">include</span><span style="color: #800000">&lt;</span><span style="color: #40015a">stdio.h</span><span style="color: #800000">&gt;</span>
<span style="color: #004a43">#</span><span style="color: #004a43">include</span><span style="color: #800000">&lt;</span><span style="color: #40015a">conio.h</span><span style="color: #800000">&gt;</span>
<span style="color: #200080;font-weight: bold">void</span> <span style="color: #400000">main</span><span style="color: #308080">(</span><span style="color: #308080">)</span>
<span style="color: #406080">{</span>
<span style="color: #200080;font-weight: bold">int</span> i<span style="color: #308080">,</span>number<span style="color: #308080">,</span>factorial<span style="color: #406080">;</span>
<span style="color: #003060">printf</span><span style="color: #308080">(</span><span style="color: #800000">"</span><span style="color: #0f69ff">n</span><span style="color: #1060b6">Enter the number : </span><span style="color: #800000">"</span><span style="color: #308080">)</span><span style="color: #406080">;</span>
<span style="color: #003060">scanf</span><span style="color: #308080">(</span><span style="color: #800000">"</span><span style="color: #0f69ff">%d</span><span style="color: #800000">"</span><span style="color: #308080">,</span><span style="color: #308080">&amp;</span>n<span style="color: #308080">)</span><span style="color: #406080">;</span>

factorial <span style="color: #308080">=</span> <span style="color: #008c00">1</span><span style="color: #406080">;</span>
<span style="color: #200080;font-weight: bold">for</span><span style="color: #308080">(</span>i<span style="color: #308080">=</span><span style="color: #008c00">1</span><span style="color: #406080">;</span>i<span style="color: #308080">&lt;</span><span style="color: #308080">=</span>n<span style="color: #406080">;</span>i<span style="color: #308080">+</span><span style="color: #308080">+</span><span style="color: #308080">)</span>
      factorial <span style="color: #308080">=</span> factorial <span style="color: #308080">*</span> i<span style="color: #406080">;</span>

<span style="color: #003060">printf</span><span style="color: #308080">(</span><span style="color: #800000">"</span><span style="color: #0f69ff">n</span><span style="color: #1060b6">Factorial of </span><span style="color: #0f69ff">%d</span><span style="color: #1060b6"> is </span><span style="color: #0f69ff">%d</span><span style="color: #800000">"</span><span style="color: #308080">,</span>n<span style="color: #308080">,</span>factorial <span style="color: #308080">)</span><span style="color: #406080">;</span>
getch<span style="color: #308080">(</span><span style="color: #308080">)</span><span style="color: #406080">;</span>
<span style="color: #406080">}</span>
