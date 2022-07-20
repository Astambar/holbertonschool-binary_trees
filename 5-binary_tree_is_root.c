#include "binary_trees.h"

/**
 * binary_tree_is_root - vérifie si un nœud est une racine
 * @node : nœud à vérifier
 *
 * Return: 1 si le nœud est une racine
 * 0 si ce n'est pas une racine
 * 0 si le nœud est NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return ((!node || (*node).parent) ? 0 : 1);
}
