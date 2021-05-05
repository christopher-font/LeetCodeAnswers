<h2>1. Two Sum</h2><h3>Easy</h3><hr><div><p>Given <span id="tou-0-8e172b9d-6585-4207-bc92-1bcbf786904b" style="color: unset; font: unset; font-feature-settings: unset; font-kerning: unset; font-optical-sizing: unset; font-variation-settings: unset; forced-color-adjust: unset; text-orientation: unset; text-rendering: unset; -webkit-font-smoothing: unset; -webkit-locale: unset; -webkit-text-orientation: unset; -webkit-writing-mode: unset; writing-mode: unset; zoom: unset; place-content: unset; place-items: unset; place-self: unset; alignment-baseline: unset; animation: unset; appearance: unset; aspect-ratio: unset; backdrop-filter: unset; backface-visibility: unset; background: unset; background-blend-mode: unset; baseline-shift: unset; block-size: unset; border-block: unset; border: unset; border-radius: unset; border-collapse: unset; border-end-end-radius: unset; border-end-start-radius: unset; border-inline: unset; border-start-end-radius: unset; border-start-start-radius: unset; inset: unset; box-shadow: unset; box-sizing: unset; break-after: unset; break-before: unset; break-inside: unset; buffered-rendering: unset; caption-side: unset; caret-color: unset; clear: unset; clip: unset; clip-path: unset; clip-rule: unset; color-interpolation: unset; color-interpolation-filters: unset; color-rendering: unset; color-scheme: unset; columns: unset; column-fill: unset; gap: unset; column-rule: unset; column-span: unset; contain: unset; contain-intrinsic-size: unset; content: unset; content-visibility: unset; counter-increment: unset; counter-reset: unset; counter-set: unset; cursor: unset; cx: unset; cy: unset; d: unset; display: unset; dominant-baseline: unset; empty-cells: unset; fill: unset; fill-opacity: unset; fill-rule: unset; filter: unset; flex: unset; flex-flow: unset; float: unset; flood-color: unset; flood-opacity: unset; grid: unset; grid-area: unset; height: unset; hyphens: unset; image-orientation: unset; image-rendering: unset; inline-size: unset; inset-block: unset; inset-inline: unset; isolation: unset; letter-spacing: unset; lighting-color: unset; line-break: unset; list-style: unset; margin-block: unset; margin: unset; margin-inline: unset; marker: unset; mask: unset; mask-type: unset; max-block-size: unset; max-height: unset; max-inline-size: unset; max-width: unset; min-block-size: unset; min-height: unset; min-inline-size: unset; min-width: unset; mix-blend-mode: unset; object-fit: unset; object-position: unset; offset: unset; opacity: 1; order: unset; origin-trial-test-property: unset; orphans: unset; outline: unset; outline-offset: unset; overflow-anchor: unset; overflow-clip-margin: unset; overflow-wrap: unset; overflow: unset; overscroll-behavior-block: unset; overscroll-behavior-inline: unset; overscroll-behavior: unset; padding-block: unset; padding: unset; padding-inline: unset; page: unset; page-orientation: unset; paint-order: unset; perspective: unset; perspective-origin: unset; pointer-events: unset; position: unset; quotes: unset; r: unset; resize: unset; ruby-position: unset; rx: unset; ry: unset; scroll-behavior: unset; scroll-margin-block: unset; scroll-margin: unset; scroll-margin-inline: unset; scroll-padding-block: unset; scroll-padding: unset; scroll-padding-inline: unset; scroll-snap-align: unset; scroll-snap-stop: unset; scroll-snap-type: unset; shape-image-threshold: unset; shape-margin: unset; shape-outside: unset; shape-rendering: unset; size: unset; speak: unset; stop-color: unset; stop-opacity: unset; stroke: unset; stroke-dasharray: unset; stroke-dashoffset: unset; stroke-linecap: unset; stroke-linejoin: unset; stroke-miterlimit: unset; stroke-opacity: unset; stroke-width: unset; tab-size: unset; table-layout: unset; text-align: unset; text-align-last: unset; text-anchor: unset; text-combine-upright: unset; text-decoration: unset; text-decoration-skip-ink: unset; text-indent: unset; text-overflow: unset; text-shadow: unset; text-size-adjust: unset; text-transform: unset; text-underline-offset: unset; text-underline-position: unset; touch-action: unset; transform: unset; transform-box: unset; transform-origin: unset; transform-style: unset; transition: opacity 200ms ease-in-out 0ms; user-select: unset; vector-effect: unset; vertical-align: unset; visibility: unset; -webkit-app-region: unset; border-spacing: unset; -webkit-border-image: unset; -webkit-box-align: unset; -webkit-box-decoration-break: unset; -webkit-box-direction: unset; -webkit-box-flex: unset; -webkit-box-ordinal-group: unset; -webkit-box-orient: unset; -webkit-box-pack: unset; -webkit-box-reflect: unset; -webkit-highlight: unset; -webkit-hyphenate-character: unset; -webkit-line-break: unset; -webkit-line-clamp: unset; -webkit-mask-box-image: unset; -webkit-mask: unset; -webkit-mask-composite: unset; -webkit-perspective-origin-x: unset; -webkit-perspective-origin-y: unset; -webkit-print-color-adjust: unset; -webkit-rtl-ordering: unset; -webkit-ruby-position: unset; -webkit-tap-highlight-color: unset; -webkit-text-combine: unset; -webkit-text-decorations-in-effect: unset; -webkit-text-emphasis: unset; -webkit-text-emphasis-position: unset; -webkit-text-fill-color: unset; -webkit-text-security: unset; -webkit-text-stroke: unset; -webkit-transform-origin-x: unset; -webkit-transform-origin-y: unset; -webkit-transform-origin-z: unset; -webkit-user-drag: unset; -webkit-user-modify: unset; white-space: unset; widows: unset; width: unset; will-change: unset; word-break: unset; word-spacing: unset; x: unset; y: unset; z-index: unset;" lang="fr"></span> of integers <code>nums</code>&nbsp;and an integer <code>target</code>, return <em>indices of the two numbers such that they add up to <code>target</code></em>.</p>

<p>You may assume that each input would have <strong><em>exactly</em> one solution</strong>, and you may not use the <em>same</em> element twice.</p>

<p>You can return <span id="tou-0-d936d0b8-dcf4-46df-9059-9cecb9739dbf" style="all: unset;"></span> in any order.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [2,7,11,15], target = 9
<strong>Output:</strong> [0,1]
<strong>Output:</strong> Because nums[0] + nums[1] == 9, we return [0, 1].
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [3,2,4], target = 6
<strong>Output:</strong> [1,2]
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> nums = [3,3], target = 6
<strong>Output:</strong> [0,1]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= nums.length &lt;= 10<sup>3</sup></code></li>
	<li><code>-10<sup>9</sup> &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
	<li><code>-10<sup>9</sup> &lt;= target &lt;= 10<sup>9</sup></code></li>
	<li><strong>Only one valid answer exists.</strong></li>
</ul>
</div>