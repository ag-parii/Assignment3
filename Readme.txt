Game Modifications – Objective 2

This document explains the enhancements added to the original game as part of Objective 2 – Implement Modifications.
Three modifications were selected from the allowed list. All changes were implemented inside the main game code.

1. Score System

A simple score system was added to track how long the player survives in the game.

What was changed

A new variable score is created.
The score increases by 1 each time the player successfully avoids an obstacle or survives a frame.
The current score is shown on the game screen during gameplay.

2. Player Lives

The game now includes a system where the player has 3 lives instead of losing immediately after one collision.

What was changed

A variable lives = 3 was added.
When the player hits an obstacle, one life is removed.
The game only ends when all lives reach zero.
The number of remaining lives is displayed on the screen.

3. Game Restart Option

After the game ends, the player can now restart without closing the program.

What was changed

A “Game Over” screen was added.
The player is asked to press a key (for example: R) to restart.
Restarting resets:
 score
 lives
 player and obstacle position

#Summary of Modifications

Features Added
 Score System	
 Player Lives	
 Game Restart Option	

Notes

All modifications have been inserted into the game loop and rendering functions.
The features work together while keeping the core gameplay unchanged.
The README clearly documents all modifications, as required.
