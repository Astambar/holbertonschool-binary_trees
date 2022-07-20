#include "binary_trees.h"

/**
 * binary_tree_nodes - compte les nœuds avec au
 * moins 1 enfant dans un arbre binaire
 * @tree: arbre à partir duquel compter les nœuds
 *
 * Return: nombre de nœuds comptés
 * 0 si l'arbre est NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!(*tree).left && !(*tree).right))
		return (0);

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

/**
 * binary_tree_size - mesure la taille d'un arbre binaire
 * @tree : arbre pour mesurer la taille de
 *
 * Return: taille de l'arbre
 * 0 si l'arbre est NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size((*tree).left) + binary_tree_size((*tree).right) + 1);
}

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

	if (!(*tree).left)
		if (!(*tree).right)
			return (1);

	return (binary_tree_leaves((*tree).left) + binary_tree_leaves((*tree).right));
}
