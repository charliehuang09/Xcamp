cmake_minimum_required(VERSION 3.23)
project(Xcamp)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Codeforces)
include_directories(Cses)
include_directories(Usaco)
include_directories(Xcamp-201c)
include_directories(Xcamp-202c)
include_directories(Xcamp-300c)
include_directories(Xcamp-301c)

add_executable(Xcamp
        "Codeforces/Completed/1000pts/Save More Mice.cpp"
        "Codeforces/Completed/1000pts/Triangles on a Rectangle.cpp"
        "Codeforces/Completed/900pts/AB Balance.cpp"
        "Codeforces/Completed/900pts/Long Comparison.cpp"
        "Codeforces/Completed/900pts/Odd Grasshopper.cpp"
        "Codeforces/Completed/900pts/Special Permutation.cpp"
        "Codeforces/Completed/900pts/Square String?.cpp"
        "Codeforces/Completed/900pts/Squares and Cubes.cpp"
        "Codeforces/Completed/Misc/Alice, Bob, and Cindy, and Dani.cpp"
        Codeforces/Completed/Misc/Basketbology.cpp
        "Codeforces/Completed/Misc/Caught in Candy.cpp"
        "Codeforces/Completed/Misc/Decorum Sensing.cpp"
        "Codeforces/Completed/Misc/Download More RAM.cpp"
        "Codeforces/Completed/Misc/Not Shading.cpp"
        "Cses/Book Shop.cpp"
        "Cses/Grid Paths.cpp"
        "Cses/Removing Digits.cpp"
        "Usaco/Completed/Appending Mex.cpp"
        "Usaco/Completed/Bucket Brigade.cpp"
        "Usaco/Completed/Cheap Travel.cpp"
        Usaco/Completed/Clockwise_Fence.cpp
        Usaco/Completed/Comfortable_Cows.cpp
        "Usaco/Completed/Contaminated Milk.cpp"
        "Usaco/Completed/Cow Hopscotch (Bronze).cpp"
        "Usaco/Completed/Cow Jog.cpp"
        "Usaco/Completed/Cow Routing.cpp"
        Usaco/Completed/Do_You_Know_Your_ABCs.cpp
        "Usaco/Completed/Don't Be Last!.cpp"
        "Usaco/Completed/Email from Polycarp.cpp"
        "Usaco/Completed/Even More Odd Photos.cpp"
        "Usaco/Completed/Farmer John Can't Solve 3SUM.cpp"
        "Usaco/Completed/Flight Routes Check.cpp"
        Usaco/Completed/Herdle.cpp
        "Usaco/Completed/Minimum Extraction.cpp"
        "Usaco/Completed/Mowing the Field.cpp"
        "Usaco/Completed/Odd Selection.cpp"
        "Usaco/Completed/Out of Place.cpp"
        "Usaco/Completed/Pashmak and Garden.cpp"
        Usaco/Completed/Photoshoot.cpp
        "Usaco/Completed/Programming Contest.cpp"
        "Usaco/Completed/Promotion Counting.cpp"
        "Usaco/Completed/Radiant Ruby.cpp"
        "Usaco/Completed/Reverse and Concatenate.cpp"
        "Usaco/Completed/Shell Game.cpp"
        "Usaco/Completed/Social Distancing II.cpp"
        "Usaco/Completed/Sort the Array.cpp"
        "Usaco/Completed/Table Tennis.cpp"
        "Usaco/Completed/Taming the Herd.cpp"
        Usaco/Completed/Teleportation.cpp
        "Usaco/Completed/Vasya and Books.cpp"
        "Usaco/Completed/Weeb Problem.cpp"
        "Usaco/Completed/Why Did the Cow Cross the Road.cpp"
        Usaco/Completed/Word_Processor.cpp
        Usaco/Completed/Worms.cpp
        Usaco/Completed/X-Sum.cpp
        "Usaco/Incompleted/Bubble Sort.cpp"
        "Usaco/Incompleted/Catalan Numbers.cpp"
        "Usaco/Incompleted/Fall Down.cpp"
        "Usaco/Incompleted/Filled Cells.cpp"
        Usaco/Incompleted/IOU.cpp
        Usaco/Incompleted/Luggage.cpp
        "Usaco/Incompleted/Maximum Subsequence.cpp"
        "Usaco/Incompleted/Not a Cheap String.cpp"
        Usaco/Incompleted/Pegboard.cpp
        "Usaco/Incompleted/Ruthless Capitalism.cpp"
        "Usaco/Incompleted/The Bovine Shuffle.cpp"
        "Usaco/Incompleted/Two chandeliers.cpp"
        "Xcamp-201c/Completed/4-peg Hanoi Tower.cpp"
        "Xcamp-201c/Completed/Bessie's secret grassland.cpp"
        "Xcamp-201c/Completed/Blocked Billboard.cpp"
        "Xcamp-201c/Completed/Catch the Cow.cpp"
        Xcamp-201c/Completed/floodfill.cpp
        "Xcamp-201c/Completed/KFC date.cpp"
        "Xcamp-201c/Completed/Knight Moving.cpp"
        Xcamp-201c/Completed/labyrinth.cpp
        Xcamp-201c/Completed/Permutation.cpp
        "Xcamp-201c/Completed/Red and black BFS.cpp"
        "Xcamp-201c/Completed/super shelf 2.cpp"
        "Xcamp-201c/Completed/Uddered but not Herd.cpp"
        Xcamp-201c/Final/Flood.cpp
        "Xcamp-201c/Final/Sort of Test Score.cpp"
        "Xcamp-201c/Incomplete/01 Maze.cpp"
        Xcamp-201c/Incomplete/Race.cpp
        "Xcamp-201c/Incomplete/Square Pasture.cpp"
        "Xcamp-201c/Incomplete/Wondering Cow.cpp"
        "Xcamp-201c/Incomplete/Word Ladder.cpp"
        Xcamp-202c/Bonus/24.cpp
        Xcamp-202c/Bonus/Exchange.cpp
        "Xcamp-202c/Completed/Chess Eight.cpp"
        "Xcamp-202c/Completed/Disjoint Set Union.cpp"
        "Xcamp-202c/Completed/Fence Planning.cpp"
        "Xcamp-202c/Completed/Friendship Circle.cpp"
        "Xcamp-202c/Completed/Get water.cpp"
        "Xcamp-202c/Completed/Log Analysis.cpp"
        Xcamp-202c/Completed/Maze-bitset.cpp
        "Xcamp-202c/Completed/Merge Two Ordered Linear Lists.cpp"
        "Xcamp-202c/Completed/multiple of N.cpp"
        "Xcamp-202c/Completed/Number of connected blocks.cpp"
        "Xcamp-202c/Completed/numbers of 0 and 1.cpp"
        "Xcamp-202c/Completed/Parentheses, bracket, brace check.cpp"
        Xcamp-202c/Completed/Pioneers.cpp
        "Xcamp-202c/Completed/Pouring Wine.cpp"
        "Xcamp-202c/Completed/Shortest Path of Pawn.cpp"
        "Xcamp-202c/Completed/The Number Game of Little Fish.cpp"
        "Xcamp-202c/Completed/topological sequence.cpp"
        "Xcamp-202c/Completed/Word Ladder.cpp"
        "Xcamp-202c/Incomplete/mathematical expression.cpp"
        "Xcamp-202c/Midterm/Machine Translation.cpp"
        Xcamp-202c/Midterm/Traversal.cpp
        "Xcamp-202c/Midterm/Why Did the Cow Cross the Road.cpp"
        "Xcamp-300c/Angry cows.cpp"
        Xcamp-300c/Apartments.cpp
        "Xcamp-300c/Binary Search Practice.cpp"
        "Xcamp-300c/Binary Search.cpp"
        "Xcamp-300c/Breed Counting.cpp"
        "Xcamp-300c/Choose classes.cpp"
        "Xcamp-300c/Concert Tickets.cpp"
        "Xcamp-300c/Cow Dance Show.cpp"
        "Xcamp-300c/Cow Tipping.cpp"
        "Xcamp-300c/Cutting Wood.cpp"
        "Xcamp-300c/Diamond Collector.cpp"
        "Xcamp-300c/Divide array into segments.cpp"
        "Xcamp-300c/Forest Queries .cpp"
        "Xcamp-300c/Game of Hammering the Gophers.cpp"
        "Xcamp-300c/Get water.cpp"
        "Xcamp-300c/Haybale Stacking.cpp"
        "Xcamp-300c/Hoof, Paper, Scissors.cpp"
        "Xcamp-300c/Maximum Subarray Sum I.cpp"
        "Xcamp-300c/Mice and holes.cpp"
        "Xcamp-300c/Painting the Barn.cpp"
        "Xcamp-300c/Remove duplication and sort.cpp"
        "Xcamp-300c/Restaurant Customers.cpp"
        "Xcamp-300c/rope cutting.cpp"
        "Xcamp-300c/Subarray Sums I.cpp"
        "Xcamp-300c/Subarray Sums II.cpp"
        "Xcamp-300c/Subsequences Summing to Sevens.cpp"
        "Xcamp-300c/Sum of three values.cpp"
        "Xcamp-300c/Sum of Two Values.cpp"
        "Xcamp-300c/Why Did the Cow Cross the Road II.cpp"
        "Xcamp-301c/Backpack Basic.cpp"
        "Xcamp-301c/Choose Integers.cpp"
        "Xcamp-301c/Coin Combinations I.cpp"
        "Xcamp-301c/Fill the Backpack Completely.cpp"
        "Xcamp-301c/Gravity Simulation.cpp"
        "Xcamp-301c/Minimizing Coins (Interitive).cpp"
        "Xcamp-301c/Minimizing Coins (Recursive).cpp"
        Xcamp-301c/Party.cpp
        "Xcamp-301c/the longest common subsequence.cpp"
        "Xcamp-301c/the longest incremental subsequence .cpp"
        "Xcamp-301c/Triangle of Numbers (Iteritive).cpp"
        "Xcamp-301c/Triangle of Numbers (Recursive).cpp"
        "Xcamp-301c/Truck delivery.cpp"
        "Xcamp-301c/Zeros and Ones.cpp" "Xcamp-301c/Grocery Shopping.cpp" "Xcamp-301c/Weigh with Weights.cpp" "Xcamp-301c/Longest Word Chain.cpp" "Xcamp-301c/Two Sets II.cpp" "Xcamp-301c/Job Selection.cpp" "Xcamp-301c/Meth Team.cpp" Xcamp-301c/Subordinates.cpp "Xcamp-301c/Strategy Games.cpp" "Xcamp-301c/Tree Matching.cpp" "Xcamp-301c/Tree Diameter.cpp" Xcamp-301c/MooTube.cpp Xcamp-301c/Gallery.cpp 100Problembs/A.cpp 100Problembs/B.cpp 100Problembs/C.cpp 100Problembs/D.cpp 100Problembs/E.cpp 100Problembs/F.cpp 100Problembs/G.cpp 100Problembs/H.cpp 100Problembs/I.cpp 100Problembs/J.cpp 100Problembs/K.cpp 100Problembs/L.cpp 100Problembs/M.cpp 100Problembs/N.cpp 100Problembs/O.cpp 100Problembs/P.cpp 100Problembs/Q.cpp 100Problembs/R.cpp 100Problembs/S.cpp 100Problembs/T.cpp 100Problembs/U.cpp 100Problembs/V.cpp 100Problembs/W.cpp 100Problembs/X.cpp 100Problembs/Y.cpp 100Problembs/Z.cpp 100Problembs/BA.cpp 100Problembs/BB.cpp 100Problembs/BC.cpp "Usaco/Completed/Square Pasture.cpp" 100Problembs/BD.cpp 100Problembs/BE.cpp 100Problembs/BF.cpp 100Problembs/BG.cpp 100Problembs/BH.cpp 100Problembs/BJ.cpp 100Problembs/BK.cpp "Cses/Shortest Routes I.cpp" 100Problembs/BM.cpp 100Problembs/BN.cpp "Xcamp-301c/Intersection Points .cpp" "Xcamp-301c/A party without boss.cpp" "Xcamp-301c/Tree Distances I.cpp" "Codeforces/A. Quests .cpp" "Codeforces/Blowhole Blues.cpp" "Codeforces/Matching Bottles.cpp" "Phoenix and Socks.cpp" "Codeforces/Meteoric Sword.cpp" "Usaco/Incompleted/Left_Out.cpp" "Usaco/Rest_Stops.cpp" "Usaco/Island Hopping.cpp" "Usaco/Octopus Organization.cpp" "Usaco/Bovine Chemistry.cpp" Usaco/Nightclub.cpp "Usaco/Don't Read the Comments.cpp" Usaco/Boss.cpp "Usaco/Put a Knife in It.cpp" "Codeforces/Swap Game.cpp" "Codeforces/Crop Farming.cpp" "Codeforces/Get This (Easier) Bread.cpp" "Codeforces/circbarn.cpp" "Codeforces/Particular Pupper.cpp" "Codeforces/Precarious Balance.cpp" Codeforces/tbbf.cpp Codeforces/permutationgame.cpp Codeforces/Completed/sadv.cpp "Usaco/Array Partition.cpp" "Usaco/Fair Ferries Have Fair Ferry Fares.cpp" "Cses/Number of Nodes in Tree.cpp" "Xcamp-302c/Tree Depth.cpp" "Xcamp-302c/Tree Diameter.cpp" "Xcamp-302c/Tree Width.cpp" "Xcamp-302c/Weights of Subtrees.cpp" "Xcamp-302c/Center of Tree.cpp" "Xcamp-302c/Inorder Traversal.cpp" "Xcamp-302c/BST Insert Node.cpp" "Xcamp-302c/Binary Tree Traverse.cpp" Xcamp-302c/Heap.cpp "Xcamp-302c/Heap Sort.cpp" "Xcamp-302c/Distance Between Two Nodes.cpp" "Xcamp-302c/Floyd Warshall.cpp" "Xcamp-302c/Shortest Path Graph.cpp" Xcamp-302c/Dijkstra.cpp "Xcamp-302c/Single Source Dijkstra.cpp" Xcamp-302c/Meth.cpp "Xcamp-302c/Shortest Routes II.cpp" "Misc/List of Prime Numbers.cpp" Misc/Triangle.cpp)
