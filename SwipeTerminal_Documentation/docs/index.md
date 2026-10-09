# *About*
The premise of this engine is for me to learn, and practice the tools required to make a game engine. I’ve decided to make this project open source so I can show the world what is supposed to be my passion project.

In 2025, I made the decision to leave the Unity Engine behind and switch to Raylib/C as my games programming framework. I liked working on a game engine, however Unity wasn’t for me. Even after I spent 3 years on it. Raylib was a good opportunity for me to learn low-level game development, and I’ve learned so much using it. I especially loved using the C language. However, I still miss being able to use an editor.

While I have dreams to make an engine that truly fits my workflow, I don’t see myself ready to take on the task as of now. This is why I started SwipeTerminal as a side-project that I continue along with my other games.

I feel the need to mention - especially in this day and age - that I’m not using AI in this project at all. *Not even in the writing of this documentation*. As mentioned above, this is completely a passion and practice project. I intend to experience all the struggles of game engine development, hand-code all the systems, and prepare myself for my dream engine Swipe 2.

*Note: Any mention of a feature with an asterisk(\*) means the feature is not yet included in the engine, but will be added in the future.*
# *Libraries*
SwipeTerminal provides the user with 6 libraries all of which include various functions for their purpose. These libraries depend on each other but you can include them all at once by including the “swipe.h” header file.

These 6 libraries are as follows:
## *s_render.h*
Responsible for rendering objects on the game window. You can use its functions to render objects through your scripts. However, the engine already uses this library to render objects which you define inside the editor. You are most likely to use this library to change the visual properties of your already existing objects during runtime.
## *s_maths.h*
The mathematics library for SwipeTerminal. It includes various mathematical operations such as vector arithmetics, interpolation and matrix math. You can use it to change numerical data in whatever way you like in your scripts.
## *s_physics.h*
The physics engine for SwipeTerminal. This library controls how objects behave and lets you change it. You can use it to move, rotate or scale any object you have. You can also check for collisions between any types of objects.
## *s_ui.h*
Helps you build your game’s UI. This library includes object types for basic UI tools and functions that allow the player to interact with them during runtime. You can define UI elements through the
## *s_audio.h*
a
## *s_input.h*
a

