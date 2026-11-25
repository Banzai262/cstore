# cstore
A lightweight, Redis-inspired in-memory key-value database written in C, featuring a TCP server, RESP-compatible communication, and disk persistence.

Typical use-case: I can start a Battleship game, play several turns, kill the Python backend, restart it, reconnect both players, and continue exactly where we left off.