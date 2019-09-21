# SineWaveHorizontalC-CLI
 Draw a horizontal sine wave in C++/CLI

Have you ever tried to draw a sine wave and it has been harder than what you thought? This example shows how to create a sine wave that can have its parameters changed at runtime and then the updated version of the wave can be seen in the program.

The formula for generating a sine wave is y = A*sin(B(x-C))+D. Where A is the amplitude of the wave, B is the frequency of the wave, x is the x-axis value, C is the y-axis shift, and D is the vertical shift. This is good when calculating values on a piece of paper, and it becomes a little more challenging when doing this in a computer program.

Drawing with pixels can be a little tricky, and to make it easier for longer waves, the example uses drawing a line instead, which has the added benefit of preventing spaces between points on a wave. The method which makes the math and drawing concepts work is called DrawWavyLine.

More information is available on my website at:
https://scispec.ca/index.php/blog/46-make-a-sine-wave

This was created with Visual Studio 2019 C++/CLI.
