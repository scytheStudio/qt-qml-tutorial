# Positioning in Qt Quick and QML - Qt QML Tutorial #8

## Episode Purpose
In this episode, you will explore different positioning approaches in Qt Quick and QML. The concepts of x&y positioning, anchor positioning, containers (such as Row, Grid, and Column), and layouts will be explained.

This episode provides practical examples to illustrate the different positioning approaches in Qt Quick and QML, helping you understand when and where each technique is most appropriate.

Episode Link: **[YT LINK]**

## Code Short Description
In this coding example, an application has been created to simulate a house wall that you want to decorate. The wall is represented as a plain, yellowish surface.

To decorate the wall, paintings in the form of plain rectangles have been hung. Each painting is positioned using a different approach to showcase the various techniques.

A large `GridLayout` with 2 columns and 2 rows serves as the main layout. The grid layout utilizes anchors to fill the window. The paintings are positioned as follows:

- In the top-left cell of the grid, a container item has been placed, and within that container, the picture is positioned using `x` and `y` properties.

- In the top-right cell, another container has been created, and within that container, the picture is positioned using anchors.

- In the bottom-left cell, the `Flow` layout is used to place 5 identical images.

- Finally, in the bottom-right cell, another `GridLayout` is nested to hang 3 more images.

Each cell has been encapsulated in empty Item, so other positioners won't break whole wall.

The use of a `Repeater` item allows for the creation of multiple instances of the same-looking element, in this case, paintings.