#include "binary_trees.h"


/**
 * tree_height - mesure la hauteur d'un arbre binaire
 * @tree: un arbre binaire
 * Return: la hauteur d'un arbre binaire
 */

int tree_height(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_balance - mesure le facteur d'équilibre d'un arbre binaire
 * @tree: arbre binaire
 * Return: facteur d'équilibre
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left;
	int height_right;

	if (tree == NULL)
		return (0);
	height_left = tree_height((*tree).left);
	height_right = tree_height((*tree).right);

	return (height_left - height_right);
}

/**
 * binary_tree_is_full -  a function that checks if a binary tree is full
 * @tree: a binary tree
 * Return: true if the binary tree is full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->right != NULL && tree->left != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}

/**
 * binary_tree_size - La taille de l'arbre binaire
 * @tree: un arbre binaire
 * Return: la taille de l'arbre binaire
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_size((*tree).left);
	right_height = binary_tree_size((*tree).right);
	return (left_height + right_height + 1);
}

/**
 * binary_tree_is_perfect - vérifie si un arbre binaire est parfait
 * @tree: un arbre binaire
 * Return: vrai si l'arbre est parfait
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree)
		if (binary_tree_balance(tree) == 0)
			if (binary_tree_is_full(tree) == 1)
				if (binary_tree_size((*tree).left) == binary_tree_size((*tree).right))
					return (1);
	return (0);
}
