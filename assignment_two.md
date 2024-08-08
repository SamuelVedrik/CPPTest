# A2

## Part 1: The numbers... what do they mean?

Welcome to the world of hungryland! There are 26 towns in hungryland, with amazing destinations such as anchovy town and nougat town.

You are a tourist, and you're wondering how long it'll take to go from one town to another. You are given two files: `towns.txt` and `distances.txt`.

Luckily, hungryland is pretty simple to navigate! The towns are connected in a line. The towns are listed in order within `towns.txt`. 

For example, `fish town` is connected to `egg town` and `grape town`.

To go from one town to another, you have to visit all the towns in between. For example, to go from `chicken town` to `fish town`, you must take the following route:

```chicken town -> dairy town -> egg town -> fish town```

The distances between any two adjacent towns are listed in `distances`. For example, the distance from `anchonvy town` to `banana town` is `146`, and the distance
between `chicken town` and `dairy town` is `135`.

To get the distance between any two towns, you must sum the distances between all the towns you visit. For example, the distance from `chicken town` to `fish town` is:

```
chicken town -> dairy town: 135
dairy town -> egg town: 148
egg town -> fish town: 57
total: 340
```

Note that the towns are connected in both directions. That is, the distance of the trip from `fish town` to `chicken town` is the same as the trip from `chicken town` to `fish town`.

Write a program that takes in a starting town and an end town, and outputs the distance between the two towns.

#### Note:
If the starting town and the end town is the same, the distance is 0.


## Part 2: A Journey

There's a lot to see in hungryland, and so you want to figure out how the distance you must travel to visit all the towns you want to see.

Write a program that takes in a `journey.txt` file of all the towns you want to visit, and outputs the total distance of the trip. For example, the contents of journey could look like:

```
chicken town
udon town
honey town
lemon town
mango town
```
The distance calculation is as follows:

```
chicken town -> udon town: 2293
udon town -> honey town: 1714
honey town -> lemon town: 554
lemon town -> mango town: 180
Total Distance: 4741
```

#### Note:
You just have to give the distance, however for a challenge try to print it out in a format similar to the block above.


## [CHALLENGE] Part 3: A whole new world

Upon further inspection of the hungryland tourist website, you notice something interesting: `zucchini town` and `anchovy town` are actually right next to one another! 

In other words, you have actually been travelling in a circle, where the distance between `zucchini town` and `anchovy town` is 0.

With this new knowledge, there are actually **two** different paths one can take to travel between two towns.

For example, to go from `honey town` to `yogurt town`, you can take one of two paths:

```
honey town -> icecream town
icecream town -> jam town
jam town -> kulfi town
kulfi town -> lemon town
lemon town -> mango town
mango town -> nougat town
nougat town -> octopus town
octopus town -> pork town
pork town -> queso town
queso town -> rice town
rice town -> sushi town
sushi town -> tempeh town
tempeh town -> udon town
udon town -> veal town
veal town -> wings town
wings town -> xiaolongbao town
xiaolongbao town -> yogurt town
```

or, you can now take the path in the opposite direction:
```
honey town -> grape town
grape town -> fish town
fish town -> egg town
egg town -> dairy town
dairy town -> chicken town
chicken town -> banana town
banana town -> anchovy town
anchovy town -> zucchini town
zucchini town -> yogurt town
```

Write a program that takes in `journey.txt` from the previous part, and calculates the distance of the **optimal** route for that trip.

For example, for the journey of:

```
chicken town
udon town
honey town
lemon town
mango town
```

The optimal route is:

```
chicken town -> udon town: 1009
        chicken town -> banana town
        banana town -> anchovy town
        anchovy town -> zucchini town
        zucchini town -> yogurt town
        yogurt town -> xiaolongbao town
        xiaolongbao town -> wings town
        wings town -> veal town
        veal town -> udon town
udon town -> honey town: 1588
        udon town -> veal town
        veal town -> wings town
        wings town -> xiaolongbao town
        xiaolongbao town -> yogurt town
        yogurt town -> zucchini town
        zucchini town -> anchovy town
        anchovy town -> banana town
        banana town -> chicken town
        chicken town -> dairy town
        dairy town -> egg town
        egg town -> fish town
        fish town -> grape town
        grape town -> honey town
honey town -> lemon town: 554
        honey town -> icecream town
        icecream town -> jam town
        jam town -> kulfi town
        kulfi town -> lemon town
lemon town -> mango town: 180
        lemon town -> mango town
Total Distance: 3331 
```

#### Note:
Again, you just have to print the distance, however for the extra challenge try to print the values in the format above.