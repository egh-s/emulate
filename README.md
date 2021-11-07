# emulate engine-engine matches.
Simple command line tool to discover how many games are needed to proof a program change.

Example -
Games : 1000
Rounds:   20
Will produce the following result of 20 1000 game matches.

488-511 (48.9%)
499-501 (49.9%)
513-487 (51.3%)
496-503 (49.6%)
485-514 (48.5%)
490-510 (49.0%)
502-498 (50.2%)
507-492 (50.8%)
500-500 (50.0%)
476-524 (47.6%)
512-487 (51.3%)
513-487 (51.3%)
506-494 (50.6%)
489-511 (48.9%)
477-522 (47.8%)
514-485 (51.5%)
487-512 (48.8%)
474-525 (47.5%)
515-484 (51.5%)
487-512 (48.8%)

One can see the enormous fluctuation between the matches, one may think (as the match in line 27 suggest with a 51.5% score) to have found an improvement of 10 elo 
but rerunning the same match easily can produce a regression of 10 elo points, see for instance the result of the match in line 13 with a 48.5% score, line 23 with 
a 47,8% score is even worse. Conclusion, playing 1000 games in engine-engine self play is meaningless.

Type (A) for Again to try next emulations, 2000, 5000, 10,000 etc.
