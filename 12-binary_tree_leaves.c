#include "binary_trees.h"

/**
 * binary_tree_leaves - compte les feuilles dans un arbre binaire
 * @tree : arbre dont on compte les feuilles
 *
 * Return: nombre de feuilles
 * 0 si l'arbre est NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!(*tree).left && !(*tree).right)
		return (1);

	return (binary_tree_leaves((*tree).left) + binary_tree_leaves((*tree).right));
}
