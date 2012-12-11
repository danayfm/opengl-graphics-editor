#ifndef _DRAWINGBOARD_H
#define _DRAWINGBOARD_H
#include "Canvas.h"
#include "ColorPanel.h"
#include "DrawingToolBar.h"
#include "MenuBar.h"
#include<gl/glut.h>
#include<iostream>
using namespace std;
/*
 *This is the main drawing board class.
 * supposed to contain the object of other classes like toolbar, colorpanel, menubar, and the drawing canvas on which everything is drawn.
 */

class DrawingBoard
{
private:
	Canvas *canvas_board;
	ColorPanel *color_panel;
	MenuBar *menu_bar;
	DrawingToolBar *drawingToolBar;
public:
	DrawingBoard();
	void initBoard();
	
};
DrawingBoard::DrawingBoard()
{
	canvas_board = new Canvas(CANVAS_LEFT,CANVAS_BOTTOM, CANVAS_RIGHT,CANVAS_TOP);
	color_panel = new ColorPanel(COLOR_PANEL_LEFT, COLOR_PANEL_BOTTOM, COLOR_PANEL_RIGHT, COLOR_PANEL_TOP);
	menu_bar = new MenuBar(MENUBAR_LEFT, MENUBAR_BOTTOM, MENUBAR_RIGHT, MENUBAR_TOP);
	drawingToolBar = new DrawingToolBar( TOOLBAR_LEFT, TOOLBAR_BOTTOM, TOOLBAR_RIGHT, TOOLBAR_TOP);
}

void DrawingBoard::initBoard()
{
	canvas_board->drawBoard();
	color_panel->drawPanel();
	menu_bar->addMenuBar();
	drawingToolBar->drawToolBar();
}
#endif