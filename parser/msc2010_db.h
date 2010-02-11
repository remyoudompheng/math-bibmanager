/*
 * math-bibmanager
 * A Bibliography manager for mathematicians
 *
 * Copyright (C) 2010 Rémy Oudompheng

 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * MSC 2010 Database
 *
 * Copyright 2006-2010: the Editors of Mathematical Reviews (MR) and
 * Zentralblatt MATH (Zbl).
 *
 * This document is made available under the Creative Commons
 * Attribution-Noncommercial-Share Alike License:
 *   http://creativecommons.org/licenses/by-nc-sa/3.0/
 * Additional terms may apply.
 */

static char* msc2010_print_major(int maj)
{
  switch(maj)
    {
    case  0: return "General";
    case  1: return "History and biography";
    case  3: return "Mathematical logic and foundations";
    case  5: return "Combinatorics";
    case  6: return "Order, lattices, ordered algebraic structures";
    case  8: return "General algebraic systems";
    case 11: return "Number theory";
    case 12: return "Field theory and polynomials";
    case 13: return "Commutative algebra";
    case 14: return "Algebraic geometry";
    case 15: return "Linear and multilinear algebra; matrix theory";
    case 16: return "Associative rings and algebras";
    case 17: return "Nonassociative rings and algebras";
    case 18: return "Category theory; homological algebra";
    case 19: return "K-theory";
    case 20: return "Group theory and generalizations";
    case 22: return "Topological groups, Lie groups";
    case 26: return "Real functions";
    case 28: return "Measure and integration";
    case 30: return "Functions of a complex variable";
    case 31: return "Potential theory";
    case 32: return "Several complex variables and analytic spaces";
    case 33: return "Special functions (33 deals with the properties of functions as functions)";
    case 34: return "Ordinary differential equations";
    case 35: return "Partial differential equations";
    case 37: return "Dynamical systems and ergodic theory";
    case 39: return "Difference and functional equations";
    case 40: return "Sequences, series, summability";
    case 41: return "Approximations and expansions";
    case 42: return "Harmonic analysis on Euclidean spaces";
    case 43: return "Abstract harmonic analysis";
    case 44: return "Integral transforms, operational calculus";
    case 45: return "Integral equations";
    case 46: return "Functional analysis";
    case 47: return "Operator theory";
    case 49: return "Calculus of variations and optimal control; optimization";
    case 51: return "Geometry";
    case 52: return "Convex and discrete geometry";
    case 53: return "Differential geometry";
    case 54: return "General topology";
    case 55: return "Algebraic topology";
    case 57: return "Manifolds and cell complexes";
    case 58: return "Global analysis, analysis on manifolds";
    case 60: return "Probability theory and stochastic processes";
    case 62: return "Statistics";
    case 65: return "Numerical analysis";
    case 68: return "Computer science";
    case 70: return "Mechanics of particles and systems";
    case 74: return "Mechanics of deformable solids";
    case 76: return "Fluid mechanics";
    case 78: return "Optics, electromagnetic theory";
    case 80: return "Classical thermodynamics, heat transfer";
    case 81: return "Quantum theory";
    case 82: return "Statistical mechanics, structure of matter";
    case 83: return "Relativity and gravitational theory";
    case 85: return "Astronomy and astrophysics";
    case 86: return "Geophysics";
    case 90: return "Operations research, mathematical programming";
    case 91: return "Game theory, economics, social and behavioral sciences";
    case 92: return "Biology and other natural sciences";
    case 93: return "Systems theory; control";
    case 94: return "Information and communication, circuits";
    case 97: return "Mathematics education";

    default: return "Category not implemented";
    }
}

static char* msc2010_print_medium(int maj, char med)
{
  switch(maj)
    {
    case 0: // General
      switch(med)
	{
	case 'A': return "General and miscellaneous specific topics";
	case 'B': return "Conference proceedings and collections of papers";
	default: return "Subcategory not implemented";
	}
    case 1: // History and biography
      switch(med)
	{
	case 'A': return "History of mathematics and mathematicians";
	default: return "Subcategory not implemented";
	}
    case 3: // Mathematical logic and foundations
      switch(med)
	{
	case 'A': return "Philosophical aspects of logic and foundations";
	case 'B': return "General logic";
	case 'C': return "Model theory";
	case 'D': return "Computability and recursion theory";
	case 'E': return "Set theory";
	case 'F': return "Proof theory and constructive mathematics";
	case 'G': return "Algebraic logic";
	case 'H': return "Nonstandard models";
	default: return "Subcategory not implemented";
	}
    case 5: // Combinatorics
      switch(med)
	{
	case 'A': return "Enumerative combinatorics";
	case 'B': return "Designs and configurations";
	case 'C': return "Graph theory";
	case 'D': return "Extremal combinatorics";
	case 'E': return "Algebraic combinatorics";
	default: return "Subcategory not implemented";
	}
    case 6: // Order, lattices, ordered algebraic structures
      switch(med)
	{
	case 'A': return "Ordered sets";
	case 'B': return "Lattices";
	case 'C': return "Modular lattices, complemented lattices";
	case 'D': return "Distributive lattices";
	case 'E': return "Boolean algebras (Boolean rings)";
	case 'F': return "Ordered structures";
	default: return "Subcategory not implemented";
	}
    case 8: // General algebraic systems
      switch (med)
	{
	case 'A': return "Algebraic structures";
	case 'B': return "Varieties";
	case 'C': return "Other classes of algebras";
	default: return "Subcategory not implemented";
	}
    case 11: // Number theory
      switch (med)
	case 'A': return "Elementary number theory";
	case 'B': return "Sequences and sets";
	case 'C': return "Polynomials and matrices";
	case 'D': return "Diophantine equations";
	case 'E': return "Forms and linear algebraic groups";
	case 'F': return "Discontinuous groups and automorphic forms";
	case 'G': return "Arithmetic algebraic geometry (Diophantine geometry)";
	case 'H': return "Geometry of numbers";
	case 'J': return "Diophantine approximation, transcendental number theory";
	case 'K': return "Probabilistic theory: distribution modulo 1; metric theory of algorithms";
	case 'L': return "Exponential sums and character sums";
	case 'M': return "Zeta and L-functions: analytic theory";
	case 'N': return "Multiplicative number theory";
	case 'P': return "Additive number theory; partitions";
	case 'R': return "Algebraic number theory: global fields";
	case 'S': return "Algebraic number theory: local and p-adic fields";
	case 'T': return "Finite fields and commutative rings (number-theoretic aspects)";
	case 'U': return "Connections with logic";
	case 'Y': return "Computational number theory";
	case 'Z': return "Miscellaneous applications of number theory";
	default: return "Subcategory not implemented";
	}
    case 12: // Field theory and polynomials
      switch(med)
	{
	case 'D': return "Real and complex fields";
	case 'E': return "General field theory";
	case 'F': return "Field extensions";
	case 'G': return "Homological methods (field theory)";
	case 'H': return "Differential and difference algebra";
	case 'J': return "Topological fields";
	case 'K': return "Generalizations of fields";
	case 'L': return "Connections with logic";
	case 'Y': return "Computational aspects of field theory and polynomials";
	default: return "Subcategory not implemented";
	}
    case 13: // Commutative algebra
      switch(med)
	{
	case 'A': return "General commutative ring theory";
	case 'B': return "Ring extensions and related topics";
	case 'C': return "Theory of modules and ideals";
	case 'D': return "Homological methods";
	case 'E': return "Chain conditions, finiteness conditions";
	case 'F': return "Arithmetic rings and other special rings";
	case 'G': return "Integral domains";
	case 'H': return "Local rings and semilocal rings";
	case 'J': return "Topological rings and modules";
	case 'L': return "Applications of logic to commutative algebra";
	case 'M': return "Finite commutative rings";
	case 'N': return "Differential algebra";
	case 'P': return "Computational aspects and applications";
	default: return "Subcategory not implemented";
	}
    case 14: // Algebraic geometry
      switch (med)
	{
	case 'A': return "Foundations";
	case 'B': return "Local theory";
	case 'C': return "Cycles and subschemes";
	case 'D': return "Families, fibrations";
	case 'E': return "Birational geometry";
	case 'F': return "(Co)homology theory";
	case 'G': return "Arithmetic problems. Diophantine geometry";
	case 'H': return "Curves";
	case 'J': return "Surfaces and higher-dimensional varieties";
	case 'K': return "Abelian varieties and schemes";
	case 'L': return "Algebraic groups";
	case 'M': return "Special varieties";
	case 'N': return "Projective and enumerative geometry";
	case 'P': return "Real algebraic and real analytic geometry";
	case 'Q': return "Computational aspects in algebraic geometry";
	case 'R': return "Affine geometry";
	case 'T': return "Tropical geometry";
	default: return "Subcategory not implemented";
	}
    case 16: // Associative rings and algebras
      switch (med)
	{
	case 'B': return "General and miscellaneous";
	case 'D': return "Modules, bimodules and ideals";
	case 'E': return "Homological methods";
	case 'G': return "Representation theory of rings and algebras";
	case 'H': return "Algebras and orders";
	case 'K': return "Division rings and semisimple Artin rings";
	case 'L': return "Local rings and generalizations";
	case 'N': return "Radicals and radical properties of rings";
	case 'P': return "Chain conditions, growth conditions, and other forms of finiteness";
	case 'R': return "Rings with polynomial identity";
	case 'S': return "Rings and algebras arising under various constructions";
	case 'T': return "Hopf algebras, quantum groups and related topics";
	case 'U': return "Conditions on elements";
	case 'W': return "Rings and algebras with additional structure";
	case 'Y': return "Generalizations";
	case 'Z': return "Computational aspects of associative rings";
	default: return "Subcategory not implemented";
	}
    case 17: // Nonassociative rings and algebras
      switch (med)
	{
	case 'A': return "General nonassociative rings";
	case 'B': return "Lie algebras and Lie superalgebras";
	case 'C': return "Jordan algebras (algebras, triples and pairs)";
	case 'D': return "Other nonassociative rings and algebras";
	default: return "Subcategory not implemented";
	}
    case 18: // Category theory, homological algebra
      switch (med)
	{
	case 'A': return "General theory of categories and functors";
	case 'B': return "Special categories";
	case 'C': return "Categories and theories";
	case 'D': return "Categories with structure";
	case 'E': return "Abelian categories";
	case 'F': return "Categories and geometry";
	case 'G': return "Homological algebra";
	default: return "Subcategory not implemented";
	}
    case 20: // Group theory and generalizations
      switch (med)
	{
	case 'A': return "Foundations";
	case 'B': return "Permutation groups";
	case 'C': return "Representation theory of groups";
	case 'D': return "Abstract finite groups";
	case 'E': return "Structure and classification of infinite or finite groups";
	case 'F': return "Special aspects of infinite or finite groups";
	case 'G': return "Linear algebraic groups and related topics";
	case 'H': return "Other groups of matrices";
	case 'J': return "Connections with homological algebra and category theory";
	case 'K': return "Abelian groups";
	case 'L': return "Groupoids (i.e. small categories in which all morphisms are isomorphisms)";
	case 'M': return "Semigroups";
	case 'N': return "Other generalizations of groups";
	case 'P': return "Probabilistic methods in group theory";
	default: return "Subcategory not implemented";
	}
    case 22: // Topological groups, Lie groups
      switch (med)
	{
	case 'A': return "Topological and differentiable algebraic systems";
	case 'B': return "Locally compact abelian groups (LCA groups)";
	case 'C': return "Compact groups";
	case 'D': return "Locally compact groups and their algebras";
	case 'E': return "Lie groups";
	case 'F': return "Noncompact transformation groups";
	default: return "Subcategory not implemented";
	}
    case 32: // Several complex variables
      switch (med)
	{
	case 'A': return "Holomorphic functions of several complex variables";
	case 'B': return "Local analytic geometry";
	case 'C': return "Analytic spaces";
	case 'D': return "Analytic continuation";
	case 'E': return "Holomorphic convexity";
	case 'F': return "Geometric convexity";
	case 'G': return "Deformations of analytic structures";
	case 'H': return "Holomorphic mappings and correspondences";
	case 'J': return "Compact analytic spaces";
	case 'K': return "Generalizations of analytic spaces";
	case 'L': return "Holomorphic fiber spaces";
	case 'M': return "Complex spaces with a group of automorphisms";
	case 'N': return "Automorphic functions";
	case 'P': return "Non-Archimedean analysis";
	case 'Q': return "Complex manifolds";
	case 'S': return "Singularities";
	case 'T': return "Pseudoconvex domains";
	case 'U': return "Pluripotential theory";
	case 'V': return "CR manifolds";
	case 'W': return "Differential operators in several variables";
	default: return "Subcategory not implemented";
	}
    case 53: // Differential geometry
      switch (med)
	{
	case 'A': return "Classical differential geometry";
	case 'B': return "Local differential geometry";
	case 'C': return "Global differential geometry";
	case 'D': return "Symplectic geometry, contact geometry";
	case 'Z': return "Applications to physics";
	default: return "Subcategory not implemented";
	}
    case 55: // Algebraic topology
      switch (med)
	{
	case 'M': return "Classical topics";
	case 'N': return "Homology and cohomology theories";
	case 'P': return "Homotopy theory";
	case 'Q': return "Homotopy groups";
	case 'R': return "Fiber spaces and bundles";
	case 'S': return "Operations and obstructions";
	case 'T': return "Spectral sequences";
	case 'U': return "Applied homological algebra and category theory";
	default: return "Subcategory not implemented";
	}
    case 57: // Manifolds and cell complexes
      switch (med)
	{
	case 'M': return "Low-dimensional topology";
	case 'N': return "Topological manifolds";
	case 'P': return "Generalized manifolds";
	case 'Q': return "PL-topology";
	case 'R': return "Differential topology";
	case 'S': return "Topological transformation groups";
	case 'T': return "Homology and homotopy of topological groups and related structures";
	default: return "Subcategory not implemented";
	}
    default: return "Subcategory not implemented";
    }

}

static char* msc2010_print_minor(int maj, char med, int min)
{
  switch(maj)
    {
    case 14: // Algebraic geometry
      switch (med)
	{
	case 'C': // Cycles and subschemes
	  switch(min)
	    {
	    case  5: return "Parametrization (Chow and Hilbert schemes)";
	    case 15: return "(Equivariant) Chow groups and rings; motives";
	    case 17: return "Intersection theory, characteristic classes, intersection multiplicities";
	    case 20: return "Divisors, linear systems, invertible sheaves";
	    case 21: return "Pencils, nets, webs";
	    case 22: return "Picard groups";
	    case 25: return "Algebraic cycles";
	    case 30: return "Transcendental methods, Hodge theory";
	    case 34: return "Torelli problem";
	    case 35: return "Applications of methods of algebraic K-theory";
	    case 40: return "Riemann-Roch theorems";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Families and fibrations
	  switch(min)
	    {
	    case  5: return "Structure of families (Picard-Lefschetz, monodromy, etc.)";
	    case  6: return "Fibrations, degenerations";
	    case  7: return "Variation of Hodge structures";
	    case 10: return "Arithmetic ground fields (finite, local, global)";
	    case 15: return "Formal methods; deformations";
	    case 20: return "Algebraic moduli problems, moduli of vector bundles";
	    case 21: return "Applications of vector bundles and moduli spaces in mathematical physics (twistor theory, instantons, quantum field theory)";
	    case 22: return "Fine and coarse moduli spaces";
	    case 23: return "Stacks and moduli problems";
	    case 24: return "Geometric Langlands program: algebro-geometric aspects";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Birational geometry
	  switch(min)
	    {
	    case  5: return "Rational and birational maps";
	    case  7: return "Birational automorphisms, Cremona group and generalizations";
	    case  8: return "Rationality questions";
	    case 15: return "Global theory and resolution of singularities";
	    case 16: return "McKay correspondence";
	    case 18: return "Arcs and motivic integration";
	    case 20: return "Coverings";
	    case 22: return "Ramification problems";
	    case 25: return "Embeddings";
	    case 30: return "Minimal model program (Mori theory, extremal rays)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // (Co)homology theory
	  switch(min)
	    {
	    case  5: return "Sheaves, derived categories of sheaves and related constructions";
	    case 10: return "Differentials and other special sheaves; D-modules; Bernstein-Sato ideals and polynomials";
	    case 17: return "Vanishing theorems";
	    case 18: return "Multiplier ideals";
	    case 20: return "Étale and other Grothendieck topologies and (co)homologies";
	    case 22: return "Brauer groups of schemes";
	    case 25: return "Classical real and complex (co)homology";
	    case 30: return "p-adic cohomology, crystalline cohomology";
	    case 35: return "Homotopy theory; fundamental groups";
	    case 40: return "de Rham cohomology";
	    case 42: return "Motivic cohomology; motivic homotopy theory";
	    case 43: return "Other algebro-geometric (co)homologies (e.g., intersection, equivariant, Lawson, Deligne (co)homologies)";
	    case 45: return "Topological properties";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'H': // Curves
	  switch(min)
	    {
	    case  5: return "Algebraic functions; function fields";
	    case 10: return "Families, moduli (algebraic)";
	    case 15: return "Families, moduli (analytic)";
	    case 20: return "Singularities, local rings";
	    case 25: return "Arithmetic ground fields";
	    case 30: return "Coverings, fundamental group";
	    case 37: return "Automorphisms";
	    case 40: return "Jacobians, Prym varieties";
	    case 42: return "Theta functions; Schottky problem";
	    case 45: return "Special curves and curves of low genus";
	    case 50: return "Plane and space curves";
	    case 51: return "Special divisors (gonality, Brill-Noether theory)";
	    case 52: return "Elliptic curves";
	    case 55: return "Riemann surfaces; Weierstrass points; gap sequences";
	    case 57: return "Dessins d'enfants theory";
	    case 60: return "Vector bundles on curves and their moduli";
	    case 70: return "Relationships with integrable systems";
	    case 81: return "Relationships with physics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'J': // Surfaces and higher-dimensional varieties
	  switch(min)
	    {
	    case 10: return "Families, moduli, classification: algebraic theory";
	    case 15: return "Moduli, classification: analytic theory; relations with modular forms";
	    case 17: return "Singularities";
	    case 20: return "Arithmetic ground fields";
	    case 25: return "Special surfaces";
	    case 26: return "Rational and ruled surfaces";
	    case 27: return "Elliptic surfaces";
	    case 28: return "K3 surfaces and Enriques surfaces";
	    case 29: return "Surfaces of general type";
	    case 30: return "3-folds";
	    case 32: return "Calabi-Yau manifolds";
	    case 33: return "Mirror symmetry";
	    case 35: return "4-folds";
	    case 40: return "n-folds (n>4)";
	    case 45: return "Fano varieties";
	    case 50: return "Automorphisms of surfaces and higher-dimensional varieties";
	    case 60: return "Vector bundles on surfaces and higher-dimensional varieties, and their moduli";
	    case 70: return "Hypersurfaces";
	    case 80: return "Topology of surfaces (Donaldson polynomials, Seiberg-Witten invariants)";
	    case 81: return "Relationships with physics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'K': // Abelian varieties and schemes
	  switch(min)
	    {
	    case  2: return "Isogeny";
	    case  5: return "Algebraic theory";
	    case 10: return "Algebraic moduli, classification";
	    case 12: return "Subvarieties";
	    case 15: return "Arithmetic ground fields";
	    case 20: return "Analytic theory; abelian integrals and differentials";
	    case 22: return "Complex multiplication";
	    case 25: return "Theta functions";
	    case 30: return "Picard schemes, higher Jacobians";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    default: return "Subcategory not implemented";
    }
}
