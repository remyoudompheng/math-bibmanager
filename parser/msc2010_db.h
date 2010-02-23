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

static const char* msc2010_print_major(const int maj)
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

static const char* msc2010_print_medium(const int maj, const char med)
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
	{
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
    case 15: // Linear and multilinear algebra; matrix theory
      switch (med)
	{
	case 'A': return "Basic linear algebra";
	case 'B': return "Special matrices";
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
    case 19: // K-theory
      switch (med)
	{
	case 'A': return "Grothendieck groups and K0";
	case 'B': return "Whitehead groups and K1";
	case 'C': return "Steinberg groups and K2";
	case 'D': return "Higher algebraic K-theory";
	case 'E': return "K-theory in geometry";
	case 'F': return "K-theory in number theory";
	case 'G': return "K-theory of forms";
	case 'J': return "Obstructions from topology";
	case 'K': return "K-theory and operator algebras";
	case 'L': return "Topological K-theory";
	case 'M': return "Miscellaneous applications of K-theory";
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
    case 26: // Real functions
      switch (med)
	{
	case 'A': return "Functions of one variable";
	case 'B': return "Functions of several variables";
	case 'C': return "Polynomials, rational functions";
	case 'D': return "Inequalities";
	case 'E': return "Miscellaneous topics";
	default: return "Subcategory not implemented";
	}
    case 28: // Measure and integration
      switch (med)
	{
	case 'A': return "Classical measure theory";
	case 'B': return "Set functions, measures and integrals with values in abstract spaces";
	case 'C': return "Set functions and measures on spaces with additional structure";
	case 'D': return "Measure-theoretic ergodic theory";
	case 'E': return "Miscellaneous topics in measure theory";
	default: return "Subcategory not implemented";
	}
    case 30: // Functions of a complex variable
      switch (med)
	{
	case 'A': return "General properties";
	case 'B': return "Series expansions";
	case 'C': return "Geometric function theory";
	case 'D': return "Entire and meromorphic functions, and related topics";
	case 'E': return "Miscellaneous topics of analysis in the complex domain";
	case 'F': return "Riemann surfaces";
	case 'G': return "Generalized function theory";
	case 'H': return "Spaces and algebras of analytic functions";
	case 'J': return "Function theory on the disc";
	case 'K': return "Universal holomorphic functions";
	case 'L': return "Analysis on metric spaces";
	default: return "Subcategory not implemented";
	}
    case 31: // Potential theory
      switch (med)
	{
	case 'A': return "Two-dimensional theory";
	case 'B': return "Higher-dimensional theory";
	case 'C': return "Other generalizations";
	case 'D': return "Axiomatic potential theory";
	case 'E': return "Potential theory on metric spaces";
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
    case 33: // Special functions
      switch (med)
	{
	case 'B': return "Elementary classical functions";
	case 'C': return "Hypergeometric functions";
	case 'D': return "Basic hypergeometric functions";
	case 'E': return "Other special functions";
	case 'F': return "Computational aspects";
	default: return "Subcategory not implemented";
	}
    case 34: // Ordinary differential equations
      switch (med)
	{
	case 'A': return "General theory";
	case 'B': return "Boundary value problems";
	case 'C': return "Qualitative theory";
	case 'D': return "Stability theory";
	case 'E': return "Asymptotic theory";
	case 'F': return "Equations and systems with randomness";
	case 'G': return "Differential equations in abstract spaces";
	case 'H': return "Control problems";
	case 'K': return "Functional-differential and differential-difference equations";
	case 'L': return "Ordinary differential operators";
	case 'M': return "Differential equations in the complex domain";
	case 'N': return "Dynamic equations on time scales or measure chains";
	default: return "Subcategory not implemented";
	}
    case 35: // Partial differential equations
      switch (med)
	{
	case 'A': return "General topics";
	case 'B': return "Qualitative properties of solutions";
	case 'C': return "Representations of solutions";
	case 'D': return "Generalized solutions";
	case 'E': return "Equations and systems with constant coefficients";
	case 'F': return "General first-order equations and systems";
	case 'G': return "General higher-order equations and systems";
	case 'H': return "Close-to-elliptic equations and systems";
	case 'J': return "Elliptic equations and systems";
	case 'K': return "Parabolic equations and systems";
	case 'L': return "Hyperbolic equations and systems";
	case 'M': return "Equations and systems of special type (mixed, composite, etc.)";
	case 'N': return "Overdetermined systems";
	case 'P': return "Spectral theory and eigenvalue problems";
	case 'Q': return "Equations of mathematical physics and other areas of application";
	case 'R': return "Miscellaneous topics";
	case 'S': return "Pseudodifferential operators and other generalizations of partial differential operators";
	default: return "Subcategory not implemented";
	}
    case 37: // Dynamical systems and ergodic theory
      switch (med)
	{
	case 'A': return "Ergodic theory";
	case 'B': return "Topological dynamics";
	case 'C': return "Smooth dynamical systems: general theory";
	case 'D': return "Dynamical systems with hyperbolic behavior";
	case 'E': return "Low-dimensional dynamical systems";
	case 'F': return "Complex dynamical systems";
	case 'G': return "Local and nonlocal bifurcation theory";
	case 'H': return "Random dynamical systems";
	case 'J': return "Finite-dimensional Hamiltonian, Lagrangian, contact, and nonholonomic systems";
	case 'K': return "Infinite-dimensional Hamiltonian systems";
	case 'L': return "Infinite-dimensional dissipative dynamical systems";
	case 'M': return "Approximation methods and numerical treatment of dynamical systems";
	case 'N': return "Applications";
	case 'P': return "Arithmetic and non-Archimedean dynamical systems";
	default: return "Subcategory not implemented";
	}
    case 39: // Difference and functional equations
      switch (med)
	{
	case 'A': return "Difference equations";
	case 'B': return "Functional equations and inequalities";
	default: return "Subcategory not implemented";
	}
    case 40: // Sequences, series, summability
      switch (med)
	{
	case 'A': return "Convergence and divergence of infinite limiting processes";
	case 'B': return "Multiple sequences and series";
	case 'C': return "General summability methods";
	case 'D': return "Direct theorems on summability";
	case 'E': return "Inversion theorems";
	case 'F': return "Absolute and strong summability";
	case 'G': return "Special methods of summability";
	case 'H': return "Functional analytic methods in summability";
	case 'J': return "Summability in abstract structures";
	default: return "Subcategory not implemented";
	}
    case 41: // Approximations and expansions
      switch (med)
	{
	case 'A': return "Approximations and expansions";
	default: return "Subcategory not implemented";
	}
    case 42: // Harmonic analysis on Euclidean spaces
      switch (med)
	{
	case 'A': return "Harmonic analysis in one variable";
	case 'B': return "Harmonic analysis in several variables";
	case 'C': return "Nontrigonometric harmonic analysis";
	default: return "Subcategory not implemented";
	}
    case 43: // Abstract harmonic analysis
      switch (med)
	{
	case 'A': return "Abstract harmonic analysis";
	default: return "Subcategory not implemented";
	}
    case 44: // Integral transforms, operational calculus
      switch (med)
	{
	case 'A': return "Integral transforms, operational calculus";
	default: return "Subcategory not implemented";
	}
    case 45: // Integral equations
      switch (med)
	{
	case 'A': return "Linear integral equations";
	case 'B': return "Fredholm integral equations";
	case 'C': return "Eigenvalue problems";
	case 'D': return "Volterra integral equations";
	case 'E': return "Singular integral equations";
	case 'F': return "Systems of linear integral equations";
	case 'G': return "Nonlinear integral equations";
	case 'H': return "Miscellaneous special kernels";
	case 'J': return "Integro-ordinary differential equations";
	case 'K': return "Integro-partial differential equations";
	case 'L': return "Theoretical approximation of solutions";
	case 'M': return "Qualitative behavior";
	case 'N': return "Abstract integral equations, integral equations in abstract spaces";
	case 'P': return "Integral operators";
	case 'Q': return "Inverse problems";
	case 'R': return "Random integral equations";
	default: return "Subcategory not implemented";
	}
    case 46: // Functional analysis
      switch (med)
	{
	case 'A': return "Topological linear spaces and related structures";
	case 'B': return "Normed linear spaces and Banach spaces; Banach lattices";
	case 'C': return "Inner product spaces and their generalizations, Hilbert spaces";
	case 'E': return "Linear function spaces and their duals";
	case 'F': return "Distributions, generalized functions, distribution spaces";
	case 'G': return "Measures, integration, derivative, holomorphy (all involving infinite-dimensional spaces)";
	case 'H': return "Topological algebras, normed rings and algebras, Banach algebras";
	case 'J': return "Commutative Banach algebras and commutative topological algebras";
	case 'K': return "Topological (rings and) algebras with an involution";
	case 'L': return "Selfadjoint operator algebras (C*-algebras, von Neumann (W*-) algebras, etc.)";
	case 'M': return "Methods of category theory in functional analysis";
	case 'N': return "Miscellaneous applications of functional analysis";
	case 'S': return "Other (nonclassical) types of functional analysis";
	case 'T': return "Nonlinear functional analysis";
	default: return "Subcategory not implemented";
	}
    case 47: // Operator theory
      switch (med)
	{
	case 'A': return "General theory of linear operators";
	case 'B': return "Special classes of linear operators";
	case 'C': return "Individual linear operators as elements of algebraic systems";
	case 'D': return "Groups and semigroups of linear operators, their generalizations and applications";
	case 'E': return "Ordinary differential operators";
	case 'F': return "Partial differential operators";
	case 'G': return "Integral, integro-differential, and pseudodifferential operators";
	case 'H': return "Nonlinear operators and their properties";
	case 'J': return "Equations and inequalities involving nonlinear operators";
	case 'L': return "Linear spaces and algebras of operators";
	case 'N': return "Miscellaneous applications of operator theory";
	case 'S': return "Other (nonclassical) types of operator theory";
	default: return "Subcategory not implemented";
	}
    case 49: // Calculus of variations and optimal control; optimization
      switch (med)
	{
	case 'J': return "Existence theories";
	case 'K': return "Optimality conditions";
	case 'L': return "Hamilton-Jacobi theories, including dynamic programming";
	case 'M': return "Numerical methods";
	case 'N': return "Miscellaneous topics";
	case 'Q': return "Manifolds";
	case 'R': return "Variational methods for eigenvalues of operators";
	case 'S': return "Variational principles of physics";
	default: return "Subcategory not implemented";
	}
    case 51: // Geometry
      switch (med)
	{
	case 'A': return "Linear incidence geometry";
	case 'B': return "Nonlinear incidence geometry";
	case 'C': return "Ring geometry (Hjelmslev, Barbilian, etc.)";
	case 'D': return "Geometric closure systems";
	case 'E': return "Finite geometry and special incidence structures";
	case 'F': return "Metric geometry";
	case 'G': return "Ordered geometries (ordered incidence structures, etc.)";
	case 'H': return "Topological geometry";
	case 'J': return "Incidence groups";
	case 'K': return "Distance geometry";
	case 'L': return "Geometric order structures";
	case 'M': return "Real and complex geometry";
	case 'N': return "Analytic and descriptive geometry";
	case 'P': return "Geometry and physics";
	default: return "Subcategory not implemented";
	}
    case 52: // Convex and discrete geometry
      switch (med)
	{
	case 'A': return "General convexity";
	case 'B': return "Polytopes and polyhedra";
	case 'C': return "Discrete geometry";
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
    case 54: // General topology
      switch (med)
	{
	case 'A': return "Generalities";
	case 'B': return "Basic constructions";
	case 'C': return "Maps and general types of spaces defined by maps";
	case 'D': return "Fairly general properties";
	case 'E': return "Spaces with richer structures";
	case 'F': return "Special properties";
	case 'G': return "Peculiar spaces";
	case 'H': return "Connections with other structures, applications";
	case 'J': return "Nonstandard topology";
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
    case 58: // Global analysis, analysis on manifolds
      switch (med)
	{
	case 'A': return "General theory of differentiable manifolds";
	case 'B': return "Infinite-dimensional manifolds";
	case 'C': return "Calculus on manifolds; nonlinear operators";
	case 'D': return "Spaces and manifolds of mappings (including nonlinear versions of 46Exx)";
	case 'E': return "Variational problems in infinite-dimensional spaces";
	case 'H': return "Pseudogroups, differentiable groupoids and general structures on manifolds";
	case 'J': return "Partial differential equations on manifolds; differential operators";
	case 'K': return "Theory of singularities and catastrophe theory";
	case 'Z': return "Applications to physics";
	default: return "Subcategory not implemented";
	}
    case 60: // Probability theory and stochastic processes
      switch (med)
	{
	case 'A': return "Foundations of probability theory";
	case 'B': return "Probability theory on algebraic and topological structures";
	case 'C': return "Combinatorial probability";
	case 'D': return "Geometric probability and stochastic geometry";
	case 'E': return "Distribution theory";
	case 'F': return "Limit theorems";
	case 'G': return "Stochastic processes";
	case 'H': return "Stochastic analysis";
	case 'J': return "Markov processes";
	case 'K': return "Special processes";
	default: return "Subcategory not implemented";
	}
    case 62: // Statistics
      switch (med)
	{
	case 'A': return "Foundational and philosophical topics";
	case 'B': return "Sufficiency and information";
	case 'C': return "Decision theory";
	case 'D': return "Sampling theory, sample surveys";
	case 'E': return "Distribution theory";
	case 'F': return "Parametric inference";
	case 'G': return "Nonparametric inference";
	case 'H': return "Multivariate analysis";
	case 'J': return "Linear inference, regression";
	case 'K': return "Design of experiments";
	case 'L': return "Sequential methods";
	case 'M': return "Inference from stochastic processes";
	case 'N': return "Survival analysis and censored data";
	case 'P': return "Applications";
	case 'Q': return "Statistical tables";
	default: return "Subcategory not implemented";
	}
    case 65: // Numerical analysis
      switch (med)
	{
	case 'A': return "Tables";
	case 'B': return "Acceleration of convergence";
	case 'C': return "Probabilistic methods, simulation and stochastic differential equations";
	case 'D': return "Numerical approximation and computational geometry (primarily algorithms)";
	case 'E': return "Numerical methods in complex analysis (potential theory, etc.)";
	case 'F': return "Numerical linear algebra";
	case 'G': return "Error analysis and interval analysis";
	case 'H': return "Nonlinear algebraic or transcendental equations";
	case 'J': return "Numerical analysis in abstract spaces";
	case 'K': return "Mathematical programming, optimization and variational techniques";
	case 'L': return "Ordinary differential equations";
	case 'M': return "Partial differential equations, initial value and time-dependent initial-boundary value problems";
	case 'N': return "Partial differential equations, boundary value problems";
	case 'P': return "Numerical problems in dynamical systems";
	case 'Q': return "Difference and functional equations, recurrence relations";
	case 'R': return "Integral equations, integral transforms";
	case 'S': return "Graphical methods";
	case 'T': return "Numerical methods in Fourier analysis";
	case 'Y': return "Computer aspects of numerical algorithms";
	case 'Z': return "Applications to physics";
	default: return "Subcategory not implemented";
	}
    case 68: // Computer science
      switch (med)
	{
	case 'M': return "Computer system organization";
	case 'N': return "Software";
	case 'P': return "Theory of data";
	case 'Q': return "Theory of computing";
	case 'R': return "Discrete mathematics in relation to computer science";
	case 'T': return "Artificial intelligence";
	case 'U': return "Computing methodologies and applications";
	case 'W': return "Algorithms";
	default: return "Subcategory not implemented";
	}
    case 70: // Mechanics of particles and systems
      switch (med)
	{
	case 'A': return "Axiomatics, foundations";
	case 'B': return "Kinematics";
	case 'C': return "Statics";
	case 'E': return "Dynamics of a rigid body and of multibody systems";
	case 'F': return "Dynamics of a system of particles, including celestial mechanics";
	case 'G': return "General models, approaches, and methods";
	case 'H': return "Hamiltonian and Lagrangian mechanics";
	case 'J': return "Linear vibration theory";
	case 'K': return "Nonlinear dynamics";
	case 'L': return "Random vibrations";
	case 'M': return "Orbital mechanics";
	case 'P': return "Variable mass, rockets";
	case 'Q': return "Control of mechanical systems";
	case 'S': return "Classical field theories";
	default: return "Subcategory not implemented";
	}
    case 74: // Mechanics of deformable solids
      switch (med)
	{
	case 'A': return "Generalities, axiomatics, foundations of continuum mechanics of solids";
	case 'B': return "Elastic materials";
	case 'C': return "Plastic materials, materials of stress-rate and internal-variable type";
	case 'D': return "Materials of strain-rate type and history type, other materials with memory (including elastic materials with viscous damping, various viscoelastic materials)";
	case 'E': return "Material properties given special treatment";
	case 'F': return "Coupling of solid mechanics with other effects";
	case 'G': return "Equilibrium (steady-state) problems";
	case 'H': return "Dynamical problems";
	case 'J': return "Waves";
	case 'K': return "Thin bodies, structures";
	case 'L': return "Special subfields of solid mechanics";
	case 'M': return "Special kinds of problems";
	case 'N': return "Phase transformations in solids";
	case 'P': return "Optimization";
	case 'Q': return "Homogenization, determination of effective properties";
	case 'R': return "Fracture and damage";
	case 'S': return "Numerical methods";
	default: return "Subcategory not implemented";
	}
    case 76: // Fluid mechanics
      switch (med)
	{
	case 'A': return "Foundations, constitutive equations, rheology";
	case 'B': return "Incompressible inviscid fluids";
	case 'D': return "Incompressible viscous fluids";
	case 'E': return "Hydrodynamic stability";
	case 'F': return "Turbulence";
	case 'G': return "General aerodynamics and subsonic flows";
	case 'H': return "Transonic flows";
	case 'J': return "Supersonic flows";
	case 'K': return "Hypersonic flows";
	case 'L': return "Shock waves and blast waves";
	case 'M': return "Basic methods in fluid mechanics";
	case 'N': return "Compressible fluids and gas dynamics, general";
	case 'P': return "Rarefied gas flows, Boltzmann equation";
	case 'Q': return "Hydro- and aero-acoustics";
	case 'R': return "Diffusion and convection";
	case 'S': return "Flows in porous media; filtration; seepage";
	case 'T': return "Two-phase and multiphase flows";
	case 'U': return "Rotating fluids";
	case 'V': return "Reaction effects in flows";
	case 'W': return "Magnetohydrodynamics and electrohydrodynamics";
	case 'X': return "Ionized gas flow in electromagnetic fields; plasmic flow";
	case 'Y': return "Quantum hydrodynamics and relativistic hydrodynamics";
	case 'Z': return "Biological fluid mechanics";
	default: return "Subcategory not implemented";
	}
    case 78: // Optics, electromagnetic theory
      switch (med)
	{
	case 'A': return "General";
	case 'M': return "Basic methods";
	default: return "Subcategory not implemented";
	}
    case 80: // Classical thermodynamics, heat transfer
      switch (med)
	{
	case 'A': return "Thermodynamics and heat transfer";
	case 'M': return "Basic methods";
	default: return "Subcategory not implemented";
	}
    case 81: // Quantum theory
      switch (med)
	{
	case 'P': return "Axiomatics, foundations, philosophy";
	case 'Q': return "General mathematical topics and methods in quantum theory";
	case 'R': return "Groups and algebras in quantum theory";
	case 'S': return "General quantum mechanics and problems of quantization";
	case 'T': return "Quantum field theory; related classical field theories";
	case 'U': return "Scattering theory";
	case 'V': return "Applications to specific physical systems";
	default: return "Subcategory not implemented";
	}
    case 82: // Statistical mechanics, structure of matter
      switch (med)
	{
	case 'B': return "Equilibrium statistical mechanics";
	case 'C': return "Time-dependent statistical mechanics (dynamic and nonequilibrium)";
	case 'D': return "Applications to specific types of physical systems";
	default: return "Subcategory not implemented";
	}
    case 83: // Relativity and gravitational theory
      switch (med)
	{
	case 'A': return "Special relativity";
	case 'B': return "Observational and experimental questions";
	case 'C': return "General relativity";
	case 'D': return "Relativistic gravitational theories other than Einstein's, including asymmetric field theories";
	case 'E': return "Unified, higher-dimensional and super field theories";
	case 'F': return "Cosmology";
	default: return "Subcategory not implemented";
	}
    case 85: // Astronomy and astrophysics
      switch (med)
	{
	case 'A': return "Astronomy and astrophysics";
	default: return "Subcategory not implemented";
	}
    case 86: // Geophysics
      switch (med)
	{
	case 'A': return "Geophysics";
	default: return "Subcategory not implemented";
	}
    case 90: // Operations research, mathematical programming
      switch (med)
	{
	case 'B': return "Operations research and management science";
	case 'C': return "Mathematical programming";
	default: return "Subcategory not implemented";
	}
    case 91: // Game theory, economics, social and behavioral sciences
      switch (med)
	{
	case 'A': return "Game theory";
	case 'B': return "Mathematical economics";
	case 'C': return "Social and behavioral sciences: general topics";
	case 'D': return "Mathematical sociology (including anthropology)";
	case 'E': return "Mathematical psychology";
	case 'F': return "Other social and behavioral sciences (mathematical treatment)";
	case 'G': return "Mathematical finance";
	default: return "Subcategory not implemented";
	}
    case 92: // Biology and other natural sciences
      switch (med)
	{
	case 'B': return "Mathematical biology in general";
	case 'C': return "Physiological, cellular and medical topics";
	case 'D': return "Genetics and population dynamics";
	case 'E': return "Chemistry";
	case 'F': return "Other natural sciences";
	default: return "Subcategory not implemented";
	}
    case 93: // Systems theory; control
      switch (med)
	{
	case 'A': return "General";
	case 'B': return "Controllability, observability, and system structure";
	case 'C': return "Control systems";
	case 'D': return "Stability";
	case 'E': return "Stochastic systems and control";
	default: return "Subcategory not implemented";
	}
    case 94: // Information and communication, circuits
      switch (med)
	{
	case 'A': return "Communication, information";
	case 'B': return "Theory of error-correcting codes and error-detecting codes";
	case 'C': return "Circuits, networks";
	case 'D': return "Fuzzy sets and logic (in connection with questions of Section 94)";
	default: return "Subcategory not implemented";
	}
    case 97: // Mathematics education
      switch (med)
	{
	case 'A': return "General, mathematics and education";
	case 'B': return "Educational policy and systems";
	case 'C': return "Psychology of mathematics education, research in mathematics education";
	case 'D': return "Education and instruction in mathematics";
	case 'E': return "Foundations of mathematics";
	case 'F': return "Arithmetic, number theory";
	case 'G': return "Geometry";
	case 'H': return "Algebra";
	case 'I': return "Analysis";
	case 'K': return "Combinatorics, graph theory, probability theory, statistics";
	case 'M': return "Mathematical modeling, applications of mathematics";
	case 'N': return "Numerical mathematics";
	case 'P': return "Computer science";
	case 'Q': return "Computer science education";
	case 'R': return "Computer science applications";
	case 'U': return "Educational material and media, educational technology";
	default: return "Subcategory not implemented";
	}
    default: return "Subcategory not implemented";
    }
}

static const char* msc2010_print_minor(const int maj, const char med, const int min)
{
  switch(maj)
    {
    case  0: // General
      switch (med)
	{
	case 'A': // General and miscellaneous specific topics
	  switch(min)
	    {
	    case  5: return "General mathematics";
	    case  6: return "Mathematics for nonmathematicians (engineering, social sciences, etc.)";
	    case  7: return "Problem books";
	    case  8: return "Recreational mathematics";
	    case  9: return "Popularization of mathematics";
	    case 15: return "Bibliographies";
	    case 17: return "External book reviews";
	    case 20: return "Dictionaries and other general reference works";
	    case 22: return "Formularies";
	    case 30: return "Philosophy of mathematics";
	    case 35: return "Methodology of mathematics, didactics";
	    case 65: return "Mathematics and music";
	    case 66: return "Mathematics and visual arts, visualization";
	    case 67: return "Mathematics and architecture";
	    case 69: return "General applied mathematics";
	    case 71: return "Theory of mathematical modeling";
	    case 72: return "General methods of simulation";
	    case 73: return "Dimensional analysis";
	    case 79: return "Physics";
	    case 99: return "Miscellaneous topics";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Conference proceedings and collections of papers
	  switch(min)
	    {
	    case  5: return "Collections of abstracts of lectures";
	    case 10: return "Collections of articles of general interest";
	    case 15: return "Collections of articles of miscellaneous specific content";
	    case 20: return "Proceedings of conferences of general interest";
	    case 25: return "Proceedings of conferences of miscellaneous specific interest";
	    case 30: return "Festschriften";
	    case 50: return "Volumes of selected translations";
	    case 55: return "Miscellaneous volumes of translations";
	    case 60: return "Collections of reprinted articles";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case  1: // History and biography
      switch (med)
	{
	case 'A': // History of mathematics and mathematicians
	  switch(min)
	    {
	    case  5: return "General histories, source books";
	    case  7: return "Ethnomathematics, general";
	    case 10: return "Paleolithic, Neolithic";
	    case 12: return "Indigenous cultures of the Americas";
	    case 13: return "Other indigenous cultures (non-European)";
	    case 15: return "Indigenous European cultures (pre-Greek, etc.)";
	    case 16: return "Egyptian";
	    case 17: return "Babylonian";
	    case 20: return "Greek, Roman";
	    case 25: return "China";
	    case 27: return "Japan";
	    case 29: return "Southeast Asia";
	    case 30: return "Islam (Medieval)";
	    case 32: return "India";
	    case 35: return "Medieval";
	    case 40: return "15th and 16th centuries, Renaissance";
	    case 45: return "17th century";
	    case 50: return "18th century";
	    case 55: return "19th century";
	    case 60: return "20th century";
	    case 61: return "Twenty-first century";
	    case 65: return "Contemporary";
	    case 67: return "Future prospectives";
	    case 70: return "Biographies, obituaries, personalia, bibliographies";
	    case 72: return "Schools of mathematics";
	    case 73: return "Universities";
	    case 74: return "Other institutions and academies";
	    case 75: return "Collected or selected works; reprintings or translations of classics";
	    case 80: return "Sociology (and profession) of mathematics";
	    case 85: return "Historiography";
	    case 90: return "Bibliographic studies";
	    case 99: return "Miscellaneous topics";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case  3: // Mathematical logic and foundations
      switch (med)
	{
	case 'A': // Philosophical aspects of logic and foundations
	  switch(min)
	    {
	    case  5: return "Philosophical and critical";
	    case 10: return "Logic in the philosophy of science";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // General logic
	  switch(min)
	    {
	    case  5: return "Classical propositional logic";
	    case 10: return "Classical first-order logic";
	    case 15: return "Higher-order logic and type theory";
	    case 20: return "Subsystems of classical logic (including intuitionistic logic)";
	    case 22: return "Abstract deductive systems";
	    case 25: return "Decidability of theories and sets of sentences";
	    case 30: return "Foundations of classical theories (including reverse mathematics)";
	    case 35: return "Mechanization of proofs and logical operations";
	    case 40: return "Combinatory logic and lambda-calculus";
	    case 42: return "Logics of knowledge and belief (including belief change)";
	    case 44: return "Temporal logic";
	    case 45: return "Modal logic (including the logic of norms)";
	    case 47: return "Substructural logics (including relevance, entailment, linear logic, Lambek calculus, BCK and BCI logics)";
	    case 48: return "Probability and inductive logic";
	    case 50: return "Many-valued logic";
	    case 52: return "Fuzzy logic; logic of vagueness";
	    case 53: return "Paraconsistent logics";
	    case 55: return "Intermediate logics";
	    case 60: return "Other nonclassical logic";
	    case 62: return "Combined logics";
	    case 65: return "Logic of natural languages";
	    case 70: return "Logic in computer science";
	    case 80: return "Other applications of logic";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Model theory
	  switch(min)
	    {
	    case  5: return "Equational classes, universal algebra";
	    case  7: return "Basic properties of first-order languages and structures";
	    case 10: return "Quantifier elimination, model completeness and related topics";
	    case 13: return "Finite structures";
	    case 15: return "Denumerable structures";
	    case 20: return "Ultraproducts and related constructions";
	    case 25: return "Model-theoretic forcing";
	    case 30: return "Other model constructions";
	    case 35: return "Categoricity and completeness of theories";
	    case 40: return "Interpolation, preservation, definability";
	    case 45: return "Classification theory, stability and related concepts";
	    case 48: return "Abstract elementary classes and related topics";
	    case 50: return "Models with special properties (saturated, rigid, etc.)";
	    case 52: return "Properties of classes of models";
	    case 55: return "Set-theoretic model theory";
	    case 57: return "Effective and recursion-theoretic model theory";
	    case 60: return "Model-theoretic algebra";
	    case 62: return "Models of arithmetic and set theory";
	    case 64: return "Model theory of ordered structures; o-minimality";
	    case 65: return "Models of other mathematical theories";
	    case 68: return "Other classical first-order model theory";
	    case 70: return "Logic on admissible sets";
	    case 75: return "Other infinitary logic";
	    case 80: return "Logic with extra quantifiers and operators";
	    case 85: return "Second- and higher-order model theory";
	    case 90: return "Nonclassical models (Boolean-valued, sheaf, etc.)";
	    case 95: return "Abstract model theory";
	    case 98: return "Applications of model theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Computability and recursion theory
	  switch(min)
	    {
	    case  3: return "Thue and Post systems, etc.";
	    case  5: return "Automata and formal grammars in connection with logical questions";
	    case 10: return "Turing machines and related notions";
	    case 15: return "Complexity of computation (including implicit computational complexity)";
	    case 20: return "Recursive functions and relations, subrecursive hierarchies";
	    case 25: return "Recursively (computably) enumerable sets and degrees";
	    case 28: return "Other Turing degree structures";
	    case 30: return "Other degrees and reducibilities";
	    case 32: return "Algorithmic randomness and dimension";
	    case 35: return "Undecidability and degrees of sets of sentences";
	    case 40: return "Word problems, etc.";
	    case 45: return "Theory of numerations, effectively presented structures";
	    case 50: return "Recursive equivalence types of sets and structures, isols";
	    case 55: return "Hierarchies";
	    case 60: return "Computability and recursion theory on ordinals, admissible sets, etc.";
	    case 65: return "Higher-type and set recursion theory";
	    case 70: return "Inductive definability";
	    case 75: return "Abstract and axiomatic computability and recursion theory";
	    case 78: return "Computation over the reals";
	    case 80: return "Applications of computability and recursion theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Set theory
	  switch(min)
	    {
	    case  2: return "Partition relations";
	    case  4: return "Ordered sets and their cofinalities; pcf theory";
	    case  5: return "Other combinatorial set theory";
	    case 10: return "Ordinal and cardinal numbers";
	    case 15: return "Descriptive set theory";
	    case 17: return "Cardinal characteristics of the continuum";
	    case 20: return "Other classical set theory (including functions, relations, and set algebra)";
	    case 25: return "Axiom of choice and related propositions";
	    case 30: return "Axiomatics of classical set theory and its fragments";
	    case 35: return "Consistency and independence results";
	    case 40: return "Other aspects of forcing and Boolean-valued models";
	    case 45: return "Inner models, including constructibility, ordinal definability, and core models";
	    case 47: return "Other notions of set-theoretic definability";
	    case 50: return "Continuum hypothesis and Martin's axiom";
	    case 55: return "Large cardinals";
	    case 57: return "Generic absoluteness and forcing axioms";
	    case 60: return "Determinacy principles";
	    case 65: return "Other hypotheses and axioms";
	    case 70: return "Nonclassical and second-order set theories";
	    case 72: return "Fuzzy set theory";
	    case 75: return "Applications of set theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // Proof theory and constructive mathematics
	  switch(min)
	    {
	    case  3: return "Proof theory, general";
	    case  5: return "Cut-elimination and normal-form theorems";
	    case  7: return "Structure of proofs";
	    case 10: return "Functionals in proof theory";
	    case 15: return "Recursive ordinals and ordinal notations";
	    case 20: return "Complexity of proofs";
	    case 25: return "Relative consistency and interpretations";
	    case 30: return "First-order arithmetic and fragments";
	    case 35: return "Second- and higher-order arithmetic and fragments";
	    case 40: return "Gödel numberings and issues of incompleteness";
	    case 45: return "Provability logics and related algebras (e.g., diagonalizable algebras)";
	    case 50: return "Metamathematics of constructive systems";
	    case 52: return "Linear logic and other substructural logics";
	    case 55: return "Intuitionistic mathematics";
	    case 60: return "Constructive and recursive analysis";
	    case 65: return "Other constructive mathematics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'G': // Algebraic logic
	  switch(min)
	    {
	    case  5: return "Boolean algebras";
	    case 10: return "Lattices and related structures";
	    case 12: return "Quantum logic";
	    case 15: return "Cylindric and polyadic algebras; relation algebras";
	    case 20: return "Łukasiewicz and Post algebras";
	    case 25: return "Other algebras related to logic";
	    case 27: return "Abstract algebraic logic";
	    case 30: return "Categorical logic, topoi";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'H': // Nonstandard models
	  switch(min)
	    {
	    case  5: return "Nonstandard models in mathematics";
	    case 10: return "Other applications of nonstandard models (economics, physics, etc.)";
	    case 15: return "Nonstandard models of arithmetic";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case  5: // Combinatorics
      switch (med)
	{
	case 'A': // Enumerative combinatorics
	  switch(min)
	    {
	    case  5: return "Permutations, words, matrices";
	    case 10: return "Factorials, binomial coefficients, combinatorial functions";
	    case 15: return "Exact enumeration problems, generating functions";
	    case 16: return "Asymptotic enumeration";
	    case 17: return "Partitions of integers";
	    case 18: return "Partitions of sets";
	    case 19: return "Combinatorial identities, bijective combinatorics";
	    case 20: return "Combinatorial inequalities";
	    case 30: return "q-calculus and related topics";
	    case 40: return "Umbral calculus";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Designs and configurations
	  switch(min)
	    {
	    case  5: return "Block designs";
	    case  7: return "Triple systems";
	    case 10: return "Difference sets (number-theoretic, group-theoretic, etc.)";
	    case 15: return "Orthogonal arrays, Latin squares, Room squares";
	    case 20: return "Matrices (incidence, Hadamard, etc.)";
	    case 25: return "Finite geometries";
	    case 30: return "Other designs, configurations";
	    case 35: return "Matroids, geometric lattices";
	    case 40: return "Packing and covering";
	    case 45: return "Tessellation and tiling problems";
	    case 50: return "Polyominoes";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Graph theory
	  switch(min)
	    {
	    case  5: return "Trees";
	    case  7: return "Vertex degrees";
	    case 10: return "Planar graphs; geometric and topological aspects of graph theory";
	    case 12: return "Distance in graphs";
	    case 15: return "Coloring of graphs and hypergraphs";
	    case 17: return "Perfect graphs";
	    case 20: return "Directed graphs (digraphs), tournaments";
	    case 21: return "Flows in graphs";
	    case 22: return "Signed and weighted graphs";
	    case 25: return "Graphs and abstract algebra (groups, rings, fields, etc.)";
	    case 30: return "Enumeration in graph theory";
	    case 31: return "Graph polynomials";
	    case 35: return "Extremal problems";
	    case 38: return "Paths and cycles";
	    case 40: return "Connectivity";
	    case 42: return "Density (toughness, etc.)";
	    case 45: return "Eulerian and Hamiltonian graphs";
	    case 50: return "Graphs and linear algebra (matrices, eigenvalues, etc.)";
	    case 51: return "Graph designs and isomomorphic decomposition";
	    case 55: return "Generalized Ramsey theory";
	    case 57: return "Games on graphs";
	    case 60: return "Isomorphism problems (reconstruction conjecture, etc.) and homomorphisms (subgraph embedding, etc.)";
	    case 62: return "Graph representations (geometric and intersection representations, etc.)";
	    case 63: return "Infinite graphs";
	    case 65: return "Hypergraphs";
	    case 69: return "Dominating sets, independent sets, cliques";
	    case 70: return "Factorization, matching, partitioning, covering and packing";
	    case 72: return "Fractional graph theory, fuzzy graph theory";
	    case 75: return "Structural characterization of families of graphs";
	    case 76: return "Graph operations (line graphs, products, etc.)";
	    case 78: return "Graph labelling (graceful graphs, bandwidth, etc.)";
	    case 80: return "Random graphs";
	    case 81: return "Random walks on graphs";
	    case 82: return "Small world graphs, complex networks";
	    case 83: return "Graph minors";
	    case 85: return "Graph algorithms";
	    case 90: return "Applications";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Extremal combinatorics
	  switch(min)
	    {
	    case  5: return "Extremal set theory";
	    case 10: return "Ramsey theory";
	    case 15: return "Transversal (matching) theory";
	    case 40: return "Probabilistic methods";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Algebraic combinatorics
	  switch(min)
	    {
	    case  5: return "Symmetric functions and generalizations";
	    case 10: return "Combinatorial aspects of representation theory";
	    case 15: return "Combinatorial aspects of groups and algebras";
	    case 18: return "Group actions on combinatorial structures";
	    case 30: return "Association schemes, strongly regular graphs";
	    case 40: return "Combinatorial aspects of commutative algebra";
	    case 45: return "Combinatorial aspects of simplicial complexes";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case  6: // Order, lattices, ordered algebraic structures
      switch (med)
	{
	case 'A': // Ordered sets
	  switch(min)
	    {
	    case  5: return "Total order";
	    case  6: return "Partial order, general";
	    case  7: return "Combinatorics of partially ordered sets";
	    case 11: return "Algebraic aspects of posets";
	    case 12: return "Semilattices";
	    case 15: return "Galois correspondences, closure operators";
	    case 75: return "Generalizations of ordered sets";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Lattices
	  switch(min)
	    {
	    case  5: return "Structure theory";
	    case 10: return "Ideals, congruence relations";
	    case 15: return "Representation theory";
	    case 20: return "Varieties of lattices";
	    case 23: return "Complete lattices, completions";
	    case 25: return "Free lattices, projective lattices, word problems";
	    case 30: return "Topological lattices, order topologies";
	    case 35: return "Continuous lattices and posets, applications";
	    case 75: return "Generalizations of lattices";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Modular lattices, complemented lattices
	  switch(min)
	    {
	    case  5: return "Modular lattices, Desarguesian lattices";
	    case 10: return "Semimodular lattices, geometric lattices";
	    case 15: return "Complemented lattices, orthocomplemented lattices and posets";
	    case 20: return "Complemented modular lattices, continuous geometries";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Distributive lattices
	  switch(min)
	    {
	    case  5: return "Structure and representation theory";
	    case 10: return "Complete distributivity";
	    case 15: return "Pseudocomplemented lattices";
	    case 20: return "Heyting algebras";
	    case 22: return "Frames, locales";
	    case 25: return "Post algebras";
	    case 30: return "De Morgan algebras, Łukasiewicz algebras";
	    case 35: return "MV-algebras";
	    case 50: return "Lattices and duality";
	    case 72: return "Fuzzy lattices (soft algebras) and related topics";
	    case 75: return "Other generalizations of distributive lattices";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Boolean algebras
	  switch(min)
	    {
	    case  5: return "Structure theory";
	    case 10: return "Chain conditions, complete algebras";
	    case 15: return "Stone spaces (Boolean spaces) and related structures";
	    case 20: return "Ring-theoretic properties";
	    case 25: return "Boolean algebras with additional operations (diagonalizable algebras, etc.)";
	    case 30: return "Boolean functions";
	    case 75: return "Generalizations of Boolean algebras";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // Ordered structures
	  switch(min)
	    {
	    case  5: return "Ordered semigroups and monoids";
	    case  7: return "Quantales";
	    case 10: return "Noether lattices";
	    case 15: return "Ordered groups";
	    case 20: return "Ordered abelian groups, Riesz groups, ordered linear spaces";
	    case 25: return "Ordered rings, algebras, modules";
	    case 30: return "Topological lattices, order topologies";
	    case 35: return "BCK-algebras, BCI-algebras";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case  8: // General algebraic systems
      switch (med)
	{
	case 'A': // Algebraic structures
	  switch(min)
	    {
	    case  2: return "Relational systems, laws of composition";
	    case  5: return "Structure theory";
	    case 30: return "Subalgebras, congruence relations";
	    case 35: return "Automorphisms, endomorphisms";
	    case 40: return "Operations, polynomials, primal algebras";
	    case 45: return "Equational compactness";
	    case 50: return "Word problems";
	    case 55: return "Partial algebras";
	    case 60: return "Unary algebras";
	    case 62: return "Finitary algebras";
	    case 65: return "Infinitary algebras";
	    case 68: return "Heterogeneous algebras";
	    case 70: return "Applications of universal algebra in computer science";
	    case 72: return "Fuzzy algebraic structures";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Varieties
	  switch(min)
	    {
	    case  5: return "Equational logic, Mal'cev (Mal'tsev) conditions";
	    case 10: return "Congruence modularity, congruence distributivity";
	    case 15: return "Lattices of varieties";
	    case 20: return "Free algebras";
	    case 25: return "Products, amalgamated products, and other kinds of limits and colimits";
	    case 26: return "Subdirect products and subdirect irreducibility";
	    case 30: return "Injectives, projectives";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Other classes of algebras
	  switch(min)
	    {
	    case  5: return "Categories of algebras";
	    case 10: return "Axiomatic model classes";
	    case 15: return "Quasivarieties";
	    case 20: return "Natural dualities for classes of algebras";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 11: // Number theory
      switch (med)
	{
	case 'A': // Elementary number theory
	  switch(min)
	    {
	    case  5: return "Multiplicative structure; Euclidean algorithm; greatest common divisors";
	    case  7: return "Congruences; primitive roots; residue systems";
	    case 15: return "Power residues, reciprocity";
	    case 25: return "Arithmetic functions; related numbers; inversion formulas";
	    case 41: return "Primes";
	    case 51: return "Factorization; primality";
	    case 55: return "Continued fractions";
	    case 63: return "Radix representation; digital problems";
	    case 67: return "Other representations";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Sequences and sets
	  switch(min)
	    {
	    case  5: return "Density, gaps, topology";
	    case 13: return "Additive bases, including sumsets";
	    case 25: return "Arithmetic progressions";
	    case 30: return "Arithmetic combinatorics; higher degree uniformity";
	    case 34: return "Representation functions";
	    case 37: return "Recurrences";
	    case 39: return "Fibonacci and Lucas numbers and polynomials and generalizations";
	    case 50: return "Sequences (mod m)";
	    case 57: return "Farey sequences; the sequences 1^k, 2^k, ...";
	    case 65: return "Binomial coefficients; factorials; q-identities";
	    case 68: return "Bernoulli and Euler numbers and polynomials";
	    case 73: return "Bell and Stirling numbers";
	    case 75: return "Other combinatorial number theory";
	    case 83: return "Special sequences and polynomials";
	    case 85: return "Automata sequences";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Polynomials and matrices
	  switch(min)
	    {
	    case  8: return "Polynomials";
	    case 20: return "Matrices, determinants";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Diophantine equations
	  switch(min)
	    {
	    case  4: return "Linear equations";
	    case  7: return "The Frobenius problem";
	    case  9: return "Quadratic and bilinear equations";
	    case 25: return "Cubic and quartic equations";
	    case 41: return "Higher degree equations; Fermat's equation";
	    case 45: return "Counting solutions of Diophantine equations";
	    case 57: return "Multiplicative and norm form equations";
	    case 59: return "Thue-Mahler equations";
	    case 61: return "Exponential equations";
	    case 68: return "Rational numbers as sums of fractions";
	    case 72: return "Equations in many variables";
	    case 75: return "Diophantine inequalities";
	    case 79: return "Congruences in many variables";
	    case 85: return "Representation problems";
	    case 88: return "p-adic and power series fields";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Forms and linear algebraic groups
	  switch(min)
	    {
	    case  4: return "Quadratic forms over general fields";
	    case  8: return "Quadratic forms over local rings and fields";
	    case 10: return "Forms over real fields";
	    case 12: return "Quadratic forms over global rings and fields";
	    case 16: return "General binary quadratic forms";
	    case 20: return "General ternary and quaternary quadratic forms; forms of more than two variables";
	    case 25: return "Sums of squares and representations by other particular quadratic forms";
	    case 39: return "Bilinear and Hermitian forms";
	    case 41: return "Class numbers of quadratic and Hermitian forms";
	    case 45: return "Analytic theory (Epstein zeta functions; relations with automorphic forms and functions)";
	    case 57: return "Classical groups";
	    case 70: return "K-theory of quadratic and Hermitian forms";
	    case 72: return "Galois cohomology of linear algebraic groups";
	    case 76: return "Forms of degree higher than two";
	    case 81: return "Algebraic theory of quadratic forms; Witt groups and rings";
	    case 88: return "Quadratic spaces; Clifford algebras";
	    case 95: return "p-adic theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // Discontinuous groups and automorphic forms
	  switch(min)
	    {
	    case  3: return "Modular and automorphic functions";
	    case  6: return "Structure of modular groups and generalizations; arithmetic groups";
	    case 11: return "Holomorphic modular forms of integral weight";
	    case 12: return "Automorphic forms, one variable";
	    case 20: return "Dedekind eta function, Dedekind sums";
	    case 22: return "Relationship to Lie algebras and finite simple groups";
	    case 23: return "Relations with algebraic geometry and topology";
	    case 25: return "Hecke-Petersson operators, differential operators (one variable)";
	    case 27: return "Theta series; Weil representation; theta correspondences";
	    case 30: return "Fourier coefficients of automorphic forms";
	    case 32: return "Modular correspondences, etc.";
	    case 33: return "Congruences for modular and p-adic modular forms";
	    case 37: return "Forms of half-integer weight; nonholomorphic modular forms";
	    case 41: return "Automorphic forms on GL(2); Hilbert and Hilbert-Siegel modular groups and their modular and automorphic forms; Hilbert modular surfaces";
	    case 46: return "Siegel modular groups; Siegel and Hilbert-Siegel modular and automorphic forms";
	    case 50: return "Jacobi forms";
	    case 52: return "Modular forms associated to Drinfel'd modules";
	    case 55: return "Other groups and their modular and automorphic forms (several variables)";
	    case 60: return "Hecke-Petersson operators, differential operators (several variables)";
	    case 66: return "Langlands L-functions; one variable Dirichlet series and functional equations";
	    case 67: return "Special values of automorphic L-series, periods of modular forms, cohomology, modular symbols";
	    case 68: return "Dirichlet series in several complex variables associated to automorphic forms; Weyl group multiple Dirichlet series";
	    case 70: return "Representation-theoretic methods; automorphic representations over local and global fields";
	    case 72: return "Spectral theory; Selberg trace formula";
	    case 75: return "Cohomology of arithmetic groups";
	    case 80: return "Galois representations";
	    case 85: return "p-adic theory, local fields";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'G': // Arithmetic algebraic geometry (Diophantine geometry)
	  switch(min)
	    {
	    case  5: return "Elliptic curves over global fields";
	    case  7: return "Elliptic curves over local fields";
	    case  9: return "Drinfel'd modules; higher-dimensional motives, etc.";
	    case 10: return "Abelian varieties of dimension >1";
	    case 15: return "Complex multiplication and moduli of abelian varieties";
	    case 16: return "Elliptic and modular units";
	    case 18: return "Arithmetic aspects of modular and Shimura varieties";
	    case 20: return "Curves over finite and local fields";
	    case 25: return "Varieties over finite and local fields";
	    case 30: return "Curves of arbitrary genus or genus ≠1 over global fields";
	    case 32: return "Dessins d'enfants, Belyĭ theory";
	    case 35: return "Varieties over global fields";
	    case 40: return "L-functions of varieties over global fields; Birch-Swinnerton-Dyer conjecture";
	    case 42: return "Arithmetic mirror symmetry";
	    case 45: return "Geometric class field theory";
	    case 50: return "Heights";
	    case 55: return "Polylogarithms and relations with K-theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'H': // Geometry of numbers
	  switch(min)
	    {
	    case  6: return "Lattices and convex bodies";
	    case 16: return "Nonconvex bodies";
	    case 31: return "Lattice packing and covering";
	    case 46: return "Products of linear forms";
	    case 50: return "Minima of forms";
	    case 55: return "Quadratic forms (reduction theory, extreme forms, etc.)";
	    case 56: return "Automorphism groups of lattices";
	    case 60: return "Mean value and transfer theorems";
	    case 71: return "Relations with coding theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'J': // Diophantine approximation, transcendental number theory
	  switch(min)
	    {
	    case  4: return "Homogeneous approximation to one number";
	    case  6: return "Markov and Lagrange spectra and generalizations";
	    case 13: return "Simultaneous homogeneous approximation, linear forms";
	    case 17: return "Approximation by numbers from a fixed field";
	    case 20: return "Inhomogeneous linear forms";
	    case 25: return "Diophantine inequalities";
	    case 54: return "Small fractional parts of polynomials and generalizations";
	    case 61: return "Approximation in non-Archimedean valuations";
	    case 68: return "Approximation to algebraic numbers";
	    case 70: return "Continued fractions and generalizations";
	    case 71: return "Distribution modulo one";
	    case 72: return "Irrationality; linear independence over a field";
	    case 81: return "Transcendence (general theory)";
	    case 82: return "Measures of irrationality and of transcendence";
	    case 83: return "Metric theory";
	    case 85: return "Algebraic independence; Gel'fond's method";
	    case 86: return "Linear forms in logarithms; Baker's method";
	    case 87: return "Schmidt Subspace Theorem and applications";
	    case 89: return "Transcendence theory of elliptic and abelian functions";
	    case 91: return "Transcendence theory of other special functions";
	    case 93: return "Transcendence theory of Drinfel'd and t-modules";
	    case 95: return "Results involving abelian varieties";
	    case 97: return "Analogues of methods in Nevanlinna theory (work of Vojta et al.)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'K': // Probabilistic theory: distribution modulo 1; metric theory of algorithms
	  switch(min)
	    {
	    case  6: return "General theory of distribution modulo 1 ";
	    case 16: return "Normal numbers, radix expansions, Pisot numbers, Salem numbers, good lattice points, etc.";
	    case 31: return "Special sequences";
	    case 36: return "Well-distributed sequences and other variations";
	    case 38: return "Irregularities of distribution, discrepancy";
	    case 41: return "Continuous, p-adic and abstract analogues";
	    case 45: return "Pseudo-random numbers; Monte Carlo methods";
	    case 50: return "Metric theory of continued fractions";
	    case 55: return "Metric theory of other algorithms and expansions; measure and Hausdorff dimension";
	    case 60: return "Diophantine approximation";
	    case 65: return "Arithmetic functions";
	    case 70: return "Harmonic analysis and almost periodicity";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'L': // Exponential sums and character sums
	  switch(min)
	    {
	    case  3: return "Trigonometric and exponential sums, general";
	    case  5: return "Gauss and Kloosterman sums; generalizations";
	    case  7: return "Estimates on exponential sums";
	    case 10: return "Jacobsthal and Brewer sums; other complete character sums";
	    case 15: return "Weyl sums";
	    case 20: return "Sums over primes";
	    case 26: return "Sums over arbitrary intervals";
	    case 40: return "Estimates on character sums";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'M': // Zeta and L-functions: analytic theory
	  switch(min)
	    {
	    case  6: return "ζ(s) and L(s,χ)";
	    case 20: return "Real zeros of L(s,χ); results on L(1,χ)";
	    case 26: return "Nonreal zeros of ζ(s) and L(s,χ); Riemann and other hypotheses";
	    case 32: return "Multiple Dirichlet series and zeta functions and multizeta values";
	    case 35: return "Hurwitz and Lerch zeta functions";
	    case 36: return "Selberg zeta functions and regularized determinants; applications to spectral theory, Dirichlet series, Eisenstein series, etc. Explicit formulas";
	    case 38: return "Zeta and L-functions in characteristic p";
	    case 41: return "Other Dirichlet series and zeta functions";
	    case 45: return "Tauberian theorems";
	    case 50: return "Relations with random matrices";
	    case 55: return "Relations with noncommutative geometry";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'N': // Multiplicative number theory
	  switch(min)
	    {
	    case  5: return "Distribution of primes";
	    case 13: return "Primes in progressions";
	    case 25: return "Distribution of integers with specified multiplicative constraints";
	    case 30: return "Turán theory";
	    case 32: return "Primes represented by polynomials; other multiplicative structure of polynomial values";
	    case 35: return "Sieves";
	    case 36: return "Applications of sieve methods";
	    case 37: return "Asymptotic results on arithmetic functions";
	    case 45: return "Asymptotic results on counting functions for algebraic and topological structures";
	    case 56: return "Rate of growth of arithmetic functions";
	    case 60: return "Distribution functions associated with additive and positive multiplicative functions";
	    case 64: return "Other results on the distribution of values or the characterization of arithmetic functions";
	    case 69: return "Distribution of integers in special residue classes";
	    case 75: return "Applications of automorphic functions and forms to multiplicative problems";
	    case 80: return "Generalized primes and integers";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'P': // Additive number theory; partitions
	  switch(min)
	    {
	    case  5: return "Waring's problem and variants";
	    case 21: return "Lattice points in specified regions";
	    case 32: return "Goldbach-type theorems; other additive questions involving primes";
	    case 55: return "Applications of the Hardy-Littlewood method";
	    case 70: return "Inverse problems of additive number theory, including sumsets";
	    case 81: return "Elementary theory of partitions";
	    case 82: return "Analytic theory of partitions";
	    case 83: return "Partitions; congruences and congruential restrictions";
	    case 84: return "Partition identities; identities of Rogers-Ramanujan type";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'R': // Algebraic number theory: global fields
	  switch(min)
	    {
	    case  4: return "Algebraic numbers; rings of algebraic integers";
	    case  6: return "PV-numbers and generalizations; other special algebraic numbers; Mahler measure";
	    case  9: return "Polynomials (irreducibility, etc.)";
	    case 11: return "Quadratic extensions";
	    case 16: return "Cubic and quartic extensions";
	    case 18: return "Cyclotomic extensions";
	    case 20: return "Other abelian and metabelian extensions";
	    case 21: return "Other number fields";
	    case 23: return "Iwasawa theory";
	    case 27: return "Units and factorization";
	    case 29: return "Class numbers, class groups, discriminants";
	    case 32: return "Galois theory";
	    case 33: return "Integral representations related to algebraic numbers; Galois module structure of rings of integers";
	    case 34: return "Galois cohomology";
	    case 37: return "Class field theory";
	    case 39: return "Langlands-Weil conjectures, nonabelian class field theory";
	    case 42: return "Zeta functions and L-functions of number fields";
	    case 44: return "Distribution of prime ideals";
	    case 45: return "Density theorems";
	    case 47: return "Other analytic theory";
	    case 52: return "Quaternion and other division algebras: arithmetic, zeta functions";
	    case 54: return "Other algebras and orders, and their zeta and L-functions";
	    case 56: return "Adèle rings and groups";
	    case 58: return "Arithmetic theory of algebraic function fields";
	    case 60: return "Cyclotomic function fields (class groups, Bernoulli objects, etc.)";
	    case 65: return "Class groups and Picard groups of orders";
	    case 70: return "K-theory of global fields";
	    case 80: return "Totally real fields";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'S': // Algebraic number theory: local and p-adic fields
	  switch(min)
	    {
	    case  5: return "Polynomials";
	    case 15: return "Ramification and extension theory";
	    case 20: return "Galois theory";
	    case 23: return "Integral representations";
	    case 25: return "Galois cohomology";
	    case 31: return "Class field theory; p-adic formal groups";
	    case 37: return "Langlands-Weil conjectures, nonabelian class field theory";
	    case 40: return "Zeta functions and L-functions";
	    case 45: return "Algebras and orders, and their zeta functions";
	    case 70: return "K-theory of local fields";
	    case 80: return "Other analytic theory (analogues of beta and gamma functions, p-adic integration, etc.)";
	    case 82: return "Non-Archimedean dynamical systems";
	    case 85: return "Other nonanalytic theory";
	    case 90: return "Prehomogeneous vector spaces";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'T': // Finite fields and commutative rings (number-theoretic aspects)
	  switch(min)
	    {
	    case  6: return "Polynomials";
	    case 22: return "Cyclotomy";
	    case 23: return "Exponential sums";
	    case 24: return "Other character sums and Gauss sums";
	    case 30: return "Structure theory";
	    case 55: return "Arithmetic theory of polynomial rings over finite fields";
	    case 60: return "Finite upper half-planes";
	    case 71: return "Algebraic coding theory; cryptography";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'U': // Connections with logic
	  switch(min)
	    {
	    case  5: return "Decidability";
	    case  7: return "Ultraproducts";
	    case  9: return "Model theory";
	    case 10: return "Nonstandard arithmetic";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'Y': // Computational number theory
	  switch(min)
	    {
	    case  5: return "Factorization";
	    case 11: return "Primality";
	    case 16: return "Algorithms; complexity";
	    case 35: return "Analytic computations";
	    case 40: return "Algebraic number theory computations";
	    case 50: return "Computer solution of Diophantine equations";
	    case 55: return "Calculation of integer sequences";
	    case 60: return "Evaluation of constants";
	    case 65: return "Continued fraction calculations";
	    case 70: return "Values of arithmetic functions; tables";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'Z': // Miscellaneous applications of number theory
	  switch(min)
	    {
	    case  5: return "Miscellaneous applications of number theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 12: // Field theory and polynomials
      switch(med)
	{
	case 'D': // Real and complex fields
	  switch(min)
	    {
	    case  5: return "Polynomials: factorization";
	    case 10: return "Polynomials: location of zeros (algebraic theorems)";
	    case 15: return "Fields related with sums of squares (formally real fields, Pythagorean fields, etc.)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // General field theory
	  switch(min)
	    {
	    case  5: return "Polynomials (irreducibility, etc.)";
	    case 10: return "Special polynomials";
	    case 12: return "Equations";
	    case 15: return "Skew fields, division rings";
	    case 20: return "Finite fields (field-theoretic aspects)";
	    case 25: return "Hilbertian fields; Hilbert's irreducibility theorem";
	    case 30: return "Field arithmetic";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // Field extensions
	  switch(min)
	    {
	    case  5: return "Algebraic extensions";
	    case 10: return "Separable extensions, Galois theory";
	    case 12: return "Inverse Galois theory";
	    case 15: return "Inseparable extensions";
	    case 20: return "Transcendental extensions";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'G': // Homological methods (field theory)
	  switch(min)
	    {
	    case  5: return "Galois cohomology";
	    case 10: return "Cohomological dimension";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'H': // Differential and difference algebra
	  switch(min)
	    {
	    case  5: return "Differential algebra";
	    case 10: return "Difference algebra";
	    case 20: return "Abstract differential equations";
	    case 25: return "p-adic differential equations";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'J': // Topological fields
	  switch(min)
	    {
	    case  5: return "Normed fields";
	    case 10: return "Valued fields";
	    case 12: return "Formally p-adic fields";
	    case 15: return "Ordered fields";
	    case 17: return "Topological semifields";
	    case 20: return "General valuation theory";
	    case 25: return "Non-Archimedean valued fields";
	    case 27: return "Krasner-Tate algebras";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'K': // Generalizations of fields
	  switch(min)
	    {
	    case  5: return "Near-fields";
	    case 10: return "Semifields";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'L': // Connections with logic
	  switch(min)
	    {
	    case  5: return "Decidability";
	    case 10: return "Ultraproducts";
	    case 12: return "Model theory";
	    case 15: return "Nonstandard arithmetic";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'Y': // Computational aspects of field theory and polynomials
	  switch(min)
	    {
	    case  5: return "Computational aspects of field theory and polynomials";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 13: // Commutative algebra
      switch(med)
	{
	case 'A': // General commutative ring theory
	  switch(min)
	    {
	    case  2: return "Graded rings";
	    case  5: return "Divisibility; factorizations";
	    case 15: return "Ideals; multiplicative ideal theory";
	    case 18: return "Valuations and their generalizations";
	    case 30: return "Associated graded rings of ideals (Rees ring, form ring), analytic spread and related topics";
	    case 35: return "Characteristic p methods (Frobenius endomorphism) and reduction to characteristic p; tight closure";
	    case 50: return "Actions of groups on commutative rings; invariant theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Ring extensions and related topics
	  switch(min)
	    {
	    case  2: return "Extension theory";
	    case  5: return "Galois theory";
	    case 10: return "Morphisms";
	    case 21: return "Integral dependence; going up, going down";
	    case 22: return "Integral closure of rings and ideals; integrally closed rings, related rings (Japanese, etc.)";
	    case 25: return "Polynomials over commutative rings";
	    case 30: return "Rings of fractions and localization";
	    case 35: return "Completion";
	    case 40: return "Étale and flat extensions; Henselization; Artin approximation";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Theory of modules and ideals
	  switch(min)
	    {
	    case  5: return "Structure, classification theorems";
	    case 10: return "Projective and free modules and ideals";
	    case 11: return "Injective and flat modules and ideals";
	    case 12: return "Torsion modules and ideals";
	    case 13: return "Other special types";
	    case 14: return "Cohen-Macaulay modules";
	    case 15: return "Dimension theory, depth, related rings (catenary, etc.)";
	    case 20: return "Class groups";
	    case 40: return "Linkage, complete intersections and determinantal ideals";
	    case 60: return "Module categories";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Homological methods
	  switch(min)
	    {
	    case  2: return "Syzygies, resolutions, complexes";
	    case  3: return "(Co)homology of commutative rings and algebras (e.g., Hochschild, André-Quillen, cyclic, dihedral, etc.)";
	    case  5: return "Homological dimension";
	    case  7: return "Homological functors on modules (Tor, Ext, etc.)";
	    case  9: return "Derived categories";
	    case 10: return "Deformations and infinitesimal methods";
	    case 15: return "Grothendieck groups, K-theory";
	    case 22: return "Homological conjectures (intersection theorems)";
	    case 30: return "Torsion theory";
	    case 40: return "Hilbert-Samuel and Hilbert-Kunz functions; Poincaré series";
	    case 45: return "Local cohomology";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Chain conditions, finiteness conditions
	  switch(min)
	    {
	    case  5: return "Noetherian rings and modules";
	    case 10: return "Artinian rings and modules, finite-dimensional algebras";
	    case 15: return "Rings and modules of finite generation or presentation; number of generators";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // Arithmetic rings and other special rings
	  switch(min)
	    {
	    case  5: return "Dedekind, Prüfer, Krull and Mori rings and their generalizations";
	    case  7: return "Euclidean rings and generalizations";
	    case 10: return "Principal ideal rings";
	    case 15: return "Rings defined by factorization properties (e.g., atomic, factorial, half-factorial)";
	    case 20: return "Polynomial rings and ideals; rings of integer-valued polynomials";
	    case 25: return "Formal power series rings";
	    case 30: return "Valuation rings";
	    case 35: return "Witt vectors and related rings";
	    case 40: return "Excellent rings";
	    case 45: return "Seminormal rings";
	    case 50: return "Rings with straightening laws, Hodge algebras";
	    case 55: return "Stanley-Reisner face rings; simplicial complexes";
	    case 60: return "Cluster algebras";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'G': // Integral domains
	  switch(min)
	    {
	    case  5: return "Integral domains";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'H': // Local rings and semilocal rings
	  switch(min)
	    {
	    case  5: return "Regular local rings";
	    case 10: return "Special types (Cohen-Macaulay, Gorenstein, Buchsbaum, etc.)";
	    case 15: return "Multiplicity theory and related topics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'J': // Topological rings and modules
	  switch(min)
	    {
	    case  5: return "Power series rings";
	    case  7: return "Analytical algebras and rings";
	    case 10: return "Complete rings, completion";
	    case 15: return "Henselian rings";
	    case 20: return "Global topological rings";
	    case 25: return "Ordered rings";
	    case 30: return "Real algebra";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'L': // Applications of logic to commutative algebra
	  switch(min)
	    {
	    case  5: return "Applications of logic to commutative algebra";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'M': // Finite commutative rings
	  switch(min)
	    {
	    case  5: return "Structure";
	    case 10: return "Polynomials";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'N': // Differential algebra
	  switch(min)
	    {
	    case  5: return "Modules of differentials";
	    case 10: return "Rings of differential operators and their modules";
	    case 15: return "Derivations";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'P': // Computational aspects and applications
	  switch(min)
	    {
	    case  5: return "Polynomials, factorization";
	    case 10: return "Gröbner bases; other bases for ideals and modules (e.g., Janet and border bases)";
	    case 15: return "Solving polynomial systems; resultants";
	    case 20: return "Computational homological algebra";
	    case 25: return "Applications of commutative algebra (e.g., to statistics, control theory, optimization, etc.)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 14: // Algebraic geometry
      switch (med)
	{
	case 'A': // Foundations
	  switch(min)
	    {
	    case  5: return "Relevant commutative algebra";
	    case 10: return "Varieties and morphisms";
	    case 15: return "Schemes and morphisms";
	    case 20: return "Generalizations (algebraic spaces, stacks)";
	    case 22: return "Noncommutative algebraic geometry";
	    case 25: return "Elementary questions";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Local theory
	  switch(min)
	    {
	    case  5: return "Singularities";
	    case  7: return "Deformations of singularities";
	    case 10: return "Infinitesimal methods";
	    case 12: return "Local deformation theory, Artin approximation, etc.";
	    case 15: return "Local cohomology";
	    case 20: return "Formal neighborhoods";
	    case 25: return "Local structure of morphisms: étale, flat, etc.";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
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
	case 'G': // Arithmetic problems. Diophantine geometry
	  switch(min)
	    {
	    case  5: return "Rational points";
	    case 10: return "Zeta-functions and related questions (Birch-Swinnerton-Dyer conjecture)";
	    case 15: return "Finite ground fields";
	    case 17: return "Positive characteristic ground fields";
	    case 20: return "Local ground fields";
	    case 22: return "Rigid analytic geometry";
	    case 25: return "Global ground fields";
	    case 27: return "Other nonalgebraically closed ground fields";
	    case 32: return "Universal profinite groups (relationship to moduli spaces, projective and moduli towers, Galois theory)";
	    case 35: return "Modular and Shimura varieties";
	    case 40: return "Arithmetic varieties and schemes; Arakelov theory; heights";
	    case 50: return "Applications to coding theory and cryptography";
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
	case 'L': // Algebraic groups
	  switch(min)
	    {
	    case  5: return "Formal groups, p-divisible groups";
	    case 10: return "Group varieties";
	    case 15: return "Group schemes";
	    case 17: return "Affine algebraic groups, hyperalgebra constructions";
	    case 24: return "Geometric invariant theory";
	    case 30: return "Group actions on varieties or schemes (quotients)";
	    case 35: return "Classical groups (geometric aspects)";
	    case 40: return "Other algebraic groups (geometric aspects)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'M': // Special varieties
	  switch(min)
	    {
	    case  5: return "Varieties defined by ring conditions (factorial, Cohen-Macaulay, seminormal)";
	    case  6: return "Linkage";
	    case  7: return "Low codimension problems";
	    case 10: return "Complete intersections";
	    case 12: return "Determinantal varieties";
	    case 15: return "Grassmannians, Schubert varieties, flag manifolds";
	    case 17: return "Homogeneous spaces and generalizations";
	    case 20: return "Rational and unirational varieties";
	    case 22: return "Rationally connected varieties";
	    case 25: return "Toric varieties, Newton polyhedra";
	    case 27: return "Compactifications; symmetric and spherical varieties";
	    case 30: return "Supervarieties";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'N': // Projective and enumerative geometry
	  switch(min)
	    {
	    case  5: return "Projective techniques";
	    case 10: return "Enumerative problems (combinatorial problems)";
	    case 15: return "Classical problems, Schubert calculus";
	    case 20: return "Configurations and arrangements of linear subspaces";
	    case 25: return "Varieties of low degree";
	    case 30: return "Adjunction problems";
	    case 35: return "Gromov-Witten invariants, quantum cohomology, Gopakumar-Vafa invariants, Donaldson-Thomas invariants";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'P': // Real algebraic and real analytic geometry
	  switch(min)
	    {
	    case  5: return "Real algebraic sets";
	    case 10: return "Semialgebraic sets and related spaces";
	    case 15: return "Real analytic and semianalytic sets";
	    case 20: return "Nash functions and manifolds";
	    case 25: return "Topology of real algebraic varieties";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'Q': // Computational aspects in algebraic geometry
	  switch(min)
	    {
	    case  5: return "Curves";
	    case 10: return "Surfaces, hypersurfaces";
	    case 15: return "Higher-dimensional varieties";
	    case 20: return "Effectivity, complexity";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'R': // Affine geometry
	  switch(min)
	    {
	    case  5: return "Classification of affine varieties";
	    case 10: return "Affine spaces (automorphisms, embeddings, exotic structures, cancellation problem)";
	    case 15: return "Jacobian problem";
	    case 20: return "Group actions on affine varieties";
	    case 25: return "Affine fibrations";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'T': // Tropical geometry
	  switch(min)
	    {
	    case  5: return "Tropical geometry";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 15: // Linear and multilinear algebra; matrix theory
      switch (med)
	{
	case 'A': // Basic linear algebra
	  switch(min)
	    {
	    case  3: return "Vector spaces, linear dependence, rank";
	    case  4: return "Linear transformations, semilinear transformations";
	    case  6: return "Linear equations";
	    case  9: return "Matrix inversion, generalized inverses";
	    case 12: return "Conditioning of matrices";
	    case 15: return "Determinants, permanents, other special matrix functions";
	    case 16: return "Matrix exponential and similar functions of matrices";
	    case 18: return "Eigenvalues, singular values, and eigenvectors";
	    case 21: return "Canonical forms, reductions, classification";
	    case 22: return "Matrix pencils";
	    case 23: return "Factorization of matrices";
	    case 24: return "Matrix equations and identities";
	    case 27: return "Commutativity";
	    case 29: return "Inverse problems";
	    case 30: return "Algebraic systems of matrices";
	    case 39: return "Linear inequalities";
	    case 42: return "Inequalities involving eigenvalues and eigenvectors";
	    case 45: return "Miscellaneous inequalities involving matrices";
	    case 54: return "Matrices over function rings in one or more variables";
	    case 60: return "Norms of matrices, numerical range, applications of functional analysis to matrix theory";
	    case 63: return "Quadratic and bilinear forms, inner products";
	    case 66: return "Clifford algebras, spinors";
	    case 69: return "Multilinear algebra, tensor products";
	    case 72: return "Vector and tensor algebra, theory of invariants";
	    case 75: return "Exterior algebra, Grassmann algebras";
	    case 78: return "Other algebras built from modules";
	    case 80: return "Max-plus and related algebras";
	    case 83: return "Matrix completion problems";
	    case 86: return "Linear preserver problems";
	    case 99: return "Miscellaneous topics";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Special matrices
	  switch(min)
	    {
	    case  5: return "Toeplitz, Cauchy, and related matrices";
	    case 10: return "Orthogonal matrices";
	    case 15: return "Fuzzy matrices";
	    case 33: return "Matrices over special rings (quaternions, finite fields, etc.)";
	    case 34: return "Boolean and Hadamard matrices";
	    case 35: return "Sign pattern matrices";
	    case 36: return "Matrices of integers";
	    case 48: return "Positive matrices and their generalizations; cones of matrices";
	    case 51: return "Stochastic matrices";
	    case 52: return "Random matrices";
	    case 57: return "Hermitian, skew-Hermitian, and related matrices";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 16: // Associative rings and algebras
      switch (med)
	{
	case 'B': // General and miscellaneous
	  switch(min)
	    {
	    case 50: return "Category-theoretic methods and results (except as in 16D90)";
	    case 70: return "Applications of logic";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Modules, bimodules and ideals
	  switch(min)
	    {
	    case 10: return "General module theory";
	    case 20: return "Bimodules";
	    case 25: return "Ideals";
	    case 30: return "Infinite-dimensional simple rings (except as in 16Kxx)";
	    case 40: return "Free, projective, and flat modules and ideals";
	    case 50: return "Injective modules, self-injective rings";
	    case 60: return "Simple and semisimple modules, primitive rings and ideals";
	    case 70: return "Structure and classification (except as in 16Gxx), direct sum decomposition, cancellation";
	    case 80: return "Other classes of modules and ideals";
	    case 90: return "Module categories; module theory in a category-theoretic context; Morita equivalence and duality";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Homological methods
	  switch(min)
	    {
	    case  5: return "Syzygies, resolutions, complexes";
	    case 10: return "Homological dimension";
	    case 20: return "Grothendieck groups, K-theory, etc.";
	    case 30: return "Homological functors on modules (Tor, Ext, etc.)";
	    case 35: return "Derived categories";
	    case 40: return "(Co)homology of rings and algebras (e.g. Hochschild, cyclic, dihedral, etc.)";
	    case 45: return "Differential graded algebras and applications";
	    case 50: return "von Neumann regular rings and generalizations";
	    case 60: return "Semihereditary and hereditary rings, free ideal rings, Sylvester rings, etc.";
	    case 65: return "Homological conditions on rings (generalizations of regular, Gorenstein, Cohen-Macaulay rings, etc.)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'G': // Representation theory of rings and algebras
	  switch(min)
	    {
	    case 10: return "Representations of Artinian rings";
	    case 20: return "Representations of quivers and partially ordered sets";
	    case 30: return "Representations of orders, lattices, algebras over commutative rings";
	    case 50: return "Cohen-Macaulay modules";
	    case 60: return "Representation type (finite, tame, wild, etc.)";
	    case 70: return "Auslander-Reiten sequences (almost split sequences) and Auslander-Reiten quivers";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'H': // Algebras and orders
	  switch(min)
	    {
	    case  5: return "Separable algebras (e.g., quaternion algebras, Azumaya algebras, etc.)";
	    case 10: return "Orders in separable algebras";
	    case 15: return "Commutative orders";
	    case 20: return "Lattices over orders";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'K': // Division rings and semisimple Artin rings
	  switch(min)
	    {
	    case 20: return "Finite-dimensional";
	    case 40: return "Infinite-dimensional and general";
	    case 50: return "Brauer groups";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'L': // Local rings and generalizations
	  switch(min)
	    {
	    case 30: return "Noncommutative local and semilocal rings, perfect rings";
	    case 60: return "Quasi-Frobenius rings";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'N': // Radicals and radical properties of rings
	  switch(min)
	    {
	    case 20: return "Jacobson radical, quasimultiplication";
	    case 40: return "Nil and nilpotent radicals, sets, ideals, rings";
	    case 60: return "Prime and semiprime rings";
	    case 80: return "General radicals and rings";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'P': // Chain conditions, growth conditions, and other forms of finiteness
	  switch(min)
	    {
	    case 10: return "Finite rings and finite-dimensional algebras";
	    case 20: return "Artinian rings and modules";
	    case 40: return "Noetherian rings and modules";
	    case 50: return "Localization and Noetherian rings";
	    case 60: return "Chain conditions on annihilators and summands: Goldie-type conditions, Krull dimension";
	    case 70: return "Chain conditions on other classes of submodules, ideals, subrings, etc.; coherence";
	    case 90: return "Growth rate, Gelfand-Kirillov dimension";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'R': // Rings with polynomial identity
	  switch(min)
	    {
	    case 10: return "T-ideals, identities, varieties of rings and algebras";
	    case 20: return "Semiprime p.i. rings, rings embeddable in matrices over commutative rings";
	    case 30: return "Trace rings and invariant theory";
	    case 40: return "Identities other than those of matrices over commutative rings";
	    case 50: return "Other kinds of identities (generalized polynomial, rational, involution)";
	    case 60: return "Functional identities";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'S': // Rings and algebras arising under various constructions
	  switch(min)
	    {
	    case 10: return "Rings determined by universal properties (free algebras, coproducts, adjunction of inverses, etc.)";
	    case 15: return "Finite generation, finite presentability, normal forms (diamond lemma, term-rewriting)";
	    case 20: return "Centralizing and normalizing extensions";
	    case 30: return "Universal enveloping algebras of Lie algebras";
	    case 32: return "Rings of differential operators";
	    case 34: return "Group rings, Laurent polynomial rings";
	    case 35: return "Twisted and skew group rings, crossed products";
	    case 36: return "Ordinary and skew polynomial rings and semigroup rings";
	    case 37: return "Quadratic and Koszul algebras";
	    case 38: return "Rings arising from non-commutative algebraic geometry";
	    case 40: return "Smash products of general Hopf actions";
	    case 50: return "Endomorphism rings; matrix rings";
	    case 60: return "Rings of functions, subdirect products, sheaves of rings";
	    case 70: return "Extensions of rings by ideals";
	    case 80: return "Deformations of rings";
	    case 85: return "Rings of fractions and localizations";
	    case 90: return "Torsion theories; radicals on module categories";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'T': // Hopf algebras, quantum groups and related topics
	  switch(min)
	    {
	    case  5: return "Hopf algebras and their applications";
	    case 10: return "Bialgebras";
	    case 15: return "Coalgebras and comodules; corings";
	    case 20: return "Ring-theoretic aspects of quantum groups";
	    case 25: return "Yang-Baxter equations";
	    case 30: return "Connections with combinatorics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'U': // Conditions on elements
	  switch(min)
	    {
	    case 10: return "Integral domains";
	    case 20: return "Ore rings, multiplicative sets, Ore localization";
	    case 30: return "Divisibility, noncommutative UFDs";
	    case 60: return "Units, groups of units";
	    case 70: return "Center, normalizer (invariant elements)";
	    case 80: return "Generalizations of commutativity";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'W': // Rings and algebras with additional structure
	  switch(min)
	    {
	    case 10: return "Rings with involution; Lie, Jordan and other nonassociative structures";
	    case 20: return "Automorphisms and endomorphisms";
	    case 22: return "Actions of groups and semigroups; invariant theory";
	    case 25: return "Derivations, actions of Lie algebras";
	    case 50: return "Graded rings and modules";
	    case 55: return "“Super” (or “skew”) structure";
	    case 60: return "Valuations, completions, formal power series and related constructions";
	    case 70: return "Filtered rings; filtrational and graded techniques";
	    case 80: return "Topological and ordered rings and modules";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'Y': // Generalizations
	  switch(min)
	    {
	    case 30: return "Near-rings";
	    case 60: return "Semirings";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'Z': // Computational aspects of associative rings
	  switch(min)
	    {
	    case  5: return "Computational aspects of associative rings";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 17: // Nonassociative rings and algebras
      switch (med)
	{
	case 'A': // General nonassociative rings
	  switch(min)
	    {
	    case  1: return "General theory";
	    case  5: return "Power-associative rings";
	    case 15: return "Noncommutative Jordan algebras";
	    case 20: return "Flexible algebras";
	    case 30: return "Algebras satisfying other identities";
	    case 32: return "Leibniz algebras";
	    case 35: return "Division algebras";
	    case 36: return "Automorphisms, derivations, other operators";
	    case 40: return "Ternary compositions";
	    case 42: return "Other n-ary compositions (n≥3)";
	    case 45: return "Quadratic algebras (but not quadratic Jordan algebras)";
	    case 50: return "Free algebras";
	    case 60: return "Structure theory";
	    case 65: return "Radical theory";
	    case 70: return "Superalgebras";
	    case 75: return "Composition algebras";
	    case 80: return "Valued algebras";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Lie algebras and Lie superalgebras
	  switch(min)
	    {
	    case  1: return "Identities, free Lie (super)algebras";
	    case  5: return "Structure theory";
	    case  8: return "Coadjoint orbits; nilpotent varieties";
	    case 10: return "Representations, algebraic theory (weights)";
	    case 15: return "Representations, analytic theory";
	    case 20: return "Simple, semisimple, reductive (super)algebras";
	    case 22: return "Root systems";
	    case 25: return "Exceptional (super)algebras";
	    case 30: return "Solvable, nilpotent (super)algebras";
	    case 35: return "Universal enveloping (super)algebras";
	    case 37: return "Quantum groups (quantized enveloping algebras) and related deformations";
	    case 40: return "Automorphisms, derivations, other operators";
	    case 45: return "Lie algebras of linear algebraic groups";
	    case 50: return "Modular Lie (super)algebras";
	    case 55: return "Homological methods in Lie (super)algebras";
	    case 56: return "Cohomology of Lie (super)algebras";
	    case 60: return "Lie (super)algebras associated with other structures (associative, Jordan, etc.)";
	    case 62: return "Lie bialgebras; Lie coalgebras";
	    case 63: return "Poisson algebras";
	    case 65: return "Infinite-dimensional Lie (super)algebras";
	    case 66: return "Lie algebras of vector fields and related (super) algebras";
	    case 67: return "Kac-Moody (super)algebras; extended affine Lie algebras; toroidal Lie algebras";
	    case 68: return "Virasoro and related algebras";
	    case 69: return "Vertex operators; vertex operator algebras and related structures";
	    case 70: return "Graded Lie (super)algebras";
	    case 75: return "Color Lie (super)algebras";
	    case 80: return "Applications to integrable systems";
	    case 81: return "Applications to physics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Jordan algebras (algebras, triples and pairs)
	  switch(min)
	    {
	    case  5: return "Identities and free Jordan structures";
	    case 10: return "Structure theory";
	    case 17: return "Radicals";
	    case 20: return "Simple, semisimple algebras";
	    case 27: return "Idempotents, Peirce decompositions";
	    case 30: return "Associated groups, automorphisms";
	    case 36: return "Associated manifolds";
	    case 37: return "Associated geometries";
	    case 40: return "Exceptional Jordan structures";
	    case 50: return "Jordan structures associated with other structures";
	    case 55: return "Finite-dimensional structures";
	    case 60: return "Division algebras";
	    case 65: return "Jordan structures on Banach spaces and algebras";
	    case 70: return "Super structures";
	    case 90: return "Applications to physics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Other nonassociative rings and algebras
	  switch(min)
	    {
	    case  5: return "Alternative rings";
	    case 10: return "Mal'cev (Mal'tsev) rings and algebras";
	    case 15: return "Right alternative rings";
	    case 20: return "(γ,δ)-rings, including (1,-1)-rings";
	    case 25: return "Lie-admissible algebras";
	    case 92: return "Genetic algebras";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 18: // Category theory, homological algebra
      switch (med)
	{
	case 'A': // General theory of categories and functors
	  switch(min)
	    {
	    case  5: return "Definitions, generalizations";
	    case 10: return "Graphs, diagram schemes, precategories";
	    case 15: return "Foundations, relations to logic and deductive systems";
	    case 20: return "Epimorphisms, monomorphisms, special classes of morphisms, null morphisms";
	    case 22: return "Special properties of functors (faithful, full, etc.)";
	    case 23: return "Natural morphisms, dinatural morphisms";
	    case 25: return "Functor categories, comma categories";
	    case 30: return "Limits and colimits (products, sums, directed limits, pushouts, fiber products, equalizers, kernels, ends and coends, etc.)";
	    case 32: return "Factorization of morphisms, substructures, quotient structures, congruences, amalgams";
	    case 35: return "Categories admitting limits (complete categories), functors preserving limits, completions";
	    case 40: return "Adjoint functors (universal constructions, reflective subcategories, Kan extensions, etc.)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Special categories
	  switch(min)
	    {
	    case  5: return "Category of sets, characterizations";
	    case 10: return "Category of relations, additive relations";
	    case 15: return "Embedding theorems, universal categories";
	    case 20: return "Categories of machines, automata, operative categories";
	    case 25: return "Topoi";
	    case 30: return "Categories of topological spaces and continuous mappings";
	    case 35: return "Preorders, orders and lattices (viewed as categories)";
	    case 40: return "Groupoids, semigroupoids, semigroups, groups (viewed as categories)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Categories and theories
	  switch(min)
	    {
	    case  5: return "Equational categories";
	    case 10: return "Theories (e.g. algebraic theories), structure, and semantics";
	    case 15: return "Triples (= standard construction, monad or triad), algebras for a triple, homology and derived functors for triples";
	    case 20: return "Algebras and Kleisli categories associated with monads";
	    case 30: return "Sketches and generalizations";
	    case 35: return "Accessible and locally presentable categories";
	    case 50: return "Categorical semantics of formal languages";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Categories with structure
	  switch(min)
	    {
	    case  5: return "Double categories, 2-categories, bicategories and generalizations";
	    case 10: return "Monoidal categories (= multiplicative categories), symmetric monoidal categories, braided categories";
	    case 15: return "Closed categories (closed monoidal and Cartesian closed categories, etc.)";
	    case 20: return "Enriched categories (over closed or monoidal categories)";
	    case 25: return "Strong functors, strong adjunctions";
	    case 30: return "Fibered categories";
	    case 35: return "Structured objects in a category (group objects, etc.)";
	    case 50: return "Operads";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Abelian categories
	  switch(min)
	    {
	    case  5: return "Preadditive, additive categories";
	    case 10: return "Exact categories, abelian categories";
	    case 15: return "Grothendieck categories";
	    case 20: return "Embedding theorems";
	    case 25: return "Derived functors and satellites";
	    case 30: return "Derived categories, triangulated categories";
	    case 35: return "Localization of categories";
	    case 40: return "Torsion theories, radicals";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // Categories and geometry
	  switch(min)
	    {
	    case  5: return "Local categories and functors";
	    case 10: return "Grothendieck topologies";
	    case 15: return "Abstract manifolds and fiber bundles";
	    case 20: return "Presheaves and sheaves";
	    case 25: return "Algebraic K-theory and L-theory";
	    case 30: return "Grothendieck groups";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'G': // Homological algebra
	  switch(min)
	    {
	    case  5: return "Projectives and injectives";
	    case 10: return "Resolutions; derived functors";
	    case 15: return "Ext and Tor, generalizations, Künneth formula";
	    case 20: return "Homological dimension";
	    case 25: return "Relative homological algebra, projective classes";
	    case 30: return "Simplicial sets, simplicial objects (in a category)";
	    case 35: return "Chain complexes";
	    case 40: return "Spectral sequences, hypercohomology";
	    case 50: return "Nonabelian homological algebra";
	    case 55: return "Homotopical algebra";
	    case 60: return "Other (co)homology theories";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 19: // K-theory
      switch (med)
	{
	case 'A': // Grothendieck groups and K0
	  switch(min)
	    {
	    case 13: return "Stability for projective modules";
	    case 15: return "Efficient generation";
	    case 22: return "Frobenius induction, Burnside and representation rings";
	    case 31: return "K₀ of group rings and orders";
	    case 49: return "K₀ of other rings";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Whitehead groups and K1
	  switch(min)
	    {
	    case 10: return "Stable range conditions";
	    case 14: return "Stability for linear groups";
	    case 28: return "K₁ of group rings and orders";
	    case 37: return "Congruence subgroup problems";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Steinberg groups and K2
	  switch(min)
	    {
	    case  9: return "Central extensions and Schur multipliers";
	    case 20: return "Symbols, presentations and stability of K₂";
	    case 30: return "K₂ and the Brauer group";
	    case 40: return "Excision for K₂";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Higher algebraic K-theory
	  switch(min)
	    {
	    case  6: return "Q- and plus-constructions";
	    case 10: return "Algebraic K-theory of spaces";
	    case 23: return "Symmetric monoidal categories";
	    case 25: return "Karoubi-Villamayor-Gersten K-theory";
	    case 35: return "Negative K-theory, NK and Nil";
	    case 45: return "Higher symbols, Milnor K-theory";
	    case 50: return "Computations of higher K-theory of rings";
	    case 55: return "K-theory and homology; cyclic homology and cohomology";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // K-theory in geometry
	  switch(min)
	    {
	    case  8: return "K-theory of schemes";
	    case 15: return "Algebraic cycles and motivic cohomology";
	    case 20: return "Relations with cohomology theories";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // K-theory in number theory
	  switch(min)
	    {
	    case  5: return "Generalized class field theory";
	    case 15: return "Symbols and arithmetic";
	    case 27: return "Étale cohomology, higher regulators, zeta and L-functions";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'G': // K-theory of forms
	  switch(min)
	    {
	    case  5: return "Stability for quadratic modules";
	    case 12: return "Witt groups of rings";
	    case 24: return "L-theory of group rings";
	    case 38: return "Hermitian K-theory, relations with K-theory of rings";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'J': // Obstructions from topology
	  switch(min)
	    {
	    case  5: return "Finiteness and other obstructions in K₀";
	    case 10: return "Whitehead (and related) torsion";
	    case 25: return "Surgery obstructions";
	    case 35: return "Obstructions to group actions";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'K': // K-theory and operator algebras
	  switch(min)
	    {
	    case 14: return "K₀ as an ordered group, traces";
	    case 33: return "EXT and K-homology";
	    case 35: return "Kasparov theory (KK-theory)";
	    case 56: return "Index theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'L': // Topological K-theory
	  switch(min)
	    {
	    case 10: return "Riemann-Roch theorems, Chern characters";
	    case 20: return "J-homomorphism, Adams operations";
	    case 41: return "Connective K-theory, cobordism";
	    case 47: return "Equivariant K-theory";
	    case 50: return "Twisted K-theory; differential K-theory";
	    case 64: return "Computations, geometric applications";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'M': // Miscellaneous applications of K-theory
	  switch(min)
	    {
	    case  5: return "Miscellaneous applications of K-theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 20: // Group theory and generalizations
      switch (med)
	{
	case 'A': // Foundations
	  switch(min)
	    {
	    case  5: return "Axiomatics and elementary properties";
	    case 10: return "Metamathematical considerations";
	    case 15: return "Applications of logic to group theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Permutation groups
	  switch(min)
	    {
	    case  5: return "General theory for finite groups";
	    case  7: return "General theory for infinite groups";
	    case 10: return "Characterization theorems";
	    case 15: return "Primitive groups";
	    case 20: return "Multiply transitive finite groups";
	    case 22: return "Multiply transitive infinite groups";
	    case 25: return "Finite automorphism groups of algebraic, geometric, or combinatorial structures";
	    case 27: return "Infinite automorphism groups";
	    case 30: return "Symmetric groups";
	    case 35: return "Subgroups of symmetric groups";
	    case 40: return "Computational methods";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Representation theory of groups
	  switch(min)
	    {
	    case  5: return "Group rings of finite groups and their modules";
	    case  7: return "Group rings of infinite groups and their modules";
	    case  8: return "Hecke algebras and their representations";
	    case 10: return "Integral representations of finite groups";
	    case 11: return "p-adic representations of finite groups";
	    case 12: return "Integral representations of infinite groups";
	    case 15: return "Ordinary representations and characters";
	    case 20: return "Modular representations and characters";
	    case 25: return "Projective representations and multipliers";
	    case 30: return "Representations of finite symmetric groups";
	    case 32: return "Representations of infinite symmetric groups";
	    case 33: return "Representations of finite groups of Lie type";
	    case 34: return "Representations of sporadic groups";
	    case 35: return "Applications of group representations to physics";
	    case 40: return "Computational methods";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Abstract finite groups
	  switch(min)
	    {
	    case  5: return "Finite simple groups and their classification";
	    case  6: return "Simple groups: alternating groups and groups of Lie type";
	    case  8: return "Simple groups: sporadic groups";
	    case 10: return "Solvable groups, theory of formations, Schunck classes, Fitting classes, π-length, ranks";
	    case 15: return "Nilpotent groups, p-groups";
	    case 20: return "Sylow subgroups, Sylow properties, π-groups, π-structure";
	    case 25: return "Special subgroups (Frattini, Fitting, etc.)";
	    case 30: return "Series and lattices of subgroups";
	    case 35: return "Subnormal subgroups";
	    case 40: return "Products of subgroups";
	    case 45: return "Automorphisms";
	    case 60: return "Arithmetic and combinatorial problems";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Structure and classification of infinite or finite groups
	  switch(min)
	    {
	    case  5: return "Free nonabelian groups";
	    case  6: return "Free products, free products with amalgamation, Higman-Neumann-Neumann extensions, and generalizations";
	    case  7: return "Subgroup theorems; subgroup growth";
	    case  8: return "Groups acting on trees";
	    case 10: return "Quasivarieties and varieties of groups";
	    case 15: return "Chains and lattices of subgroups, subnormal subgroups";
	    case 18: return "Limits, profinite groups";
	    case 22: return "Extensions, wreath products, and other compositions";
	    case 25: return "Local properties";
	    case 26: return "Residual properties and generalizations; residually finite groups";
	    case 28: return "Maximal subgroups";
	    case 32: return "Simple groups";
	    case 34: return "General structure theorems";
	    case 36: return "Automorphisms of infinite groups";
	    case 42: return "Groups with a BN-pair; buildings";
	    case 45: return "Conjugacy classes";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // Special aspects of infinite or finite groups
	  switch(min)
	    {
	    case  5: return "Generators, relations, and presentations";
	    case  6: return "Cancellation theory; application of van Kampen diagrams";
	    case 10: return "Word problems, other decision problems, connections with logic and automata";
	    case 11: return "Groups of finite Morley rank";
	    case 12: return "Commutator calculus";
	    case 14: return "Derived series, central series, and generalizations";
	    case 16: return "Solvable groups, supersolvable groups";
	    case 17: return "Formations of groups, Fitting classes";
	    case 18: return "Nilpotent groups";
	    case 19: return "Generalizations of solvable and nilpotent groups";
	    case 22: return "Other classes of groups defined by subgroup chains";
	    case 24: return "FC-groups and their generalizations";
	    case 28: return "Automorphism groups of groups";
	    case 29: return "Representations of groups as automorphism groups of algebraic systems";
	    case 34: return "Fundamental groups and their automorphisms";
	    case 36: return "Braid groups; Artin groups";
	    case 38: return "Other groups related to topology or analysis";
	    case 40: return "Associated Lie structures";
	    case 45: return "Engel conditions";
	    case 50: return "Periodic groups; locally finite groups";
	    case 55: return "Reflection and Coxeter groups";
	    case 60: return "Ordered groups";
	    case 65: return "Geometric group theory";
	    case 67: return "Hyperbolic groups and nonpositively curved groups";
	    case 69: return "Asymptotic properties of groups";
	    case 70: return "Algebraic geometry over groups; equations over groups";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'G': // Linear algebraic groups and related topics
	  switch(min)
	    {
	    case  5: return "Representation theory";
	    case  7: return "Structure theory";
	    case 10: return "Cohomology theory";
	    case 15: return "Linear algebraic groups over arbitrary fields";
	    case 20: return "Linear algebraic groups over the reals, the complexes, the quaternions";
	    case 25: return "Linear algebraic groups over local fields and their integers";
	    case 30: return "Linear algebraic groups over global fields and their integers";
	    case 35: return "Linear algebraic groups over adèles and other rings and schemes";
	    case 40: return "Linear algebraic groups over finite fields";
	    case 41: return "Exceptional groups";
	    case 42: return "Quantum groups (quantized function algebras) and their representations";
	    case 43: return "Schur and q-Schur algebras";
	    case 44: return "Kac-Moody groups";
	    case 45: return "Applications to physics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'H': // Other groups of matrices
	  switch(min)
	    {
	    case  5: return "Unimodular groups, congruence subgroups";
	    case 10: return "Fuchsian groups and their generalizations";
	    case 15: return "Other geometric groups, including crystallographic groups";
	    case 20: return "Other matrix groups over fields";
	    case 25: return "Other matrix groups over rings";
	    case 30: return "Other matrix groups over finite fields";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'J': // Connections with homological algebra and category theory
	  switch(min)
	    {
	    case  5: return "Homological methods in group theory";
	    case  6: return "Cohomology of groups";
	    case 15: return "Category of groups";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'K': // Abelian groups
	  switch(min)
	    {
	    case  1: return "Finite abelian groups";
	    case 10: return "Torsion groups, primary groups and generalized primary groups";
	    case 15: return "Torsion-free groups, finite rank";
	    case 20: return "Torsion-free groups, infinite rank";
	    case 21: return "Mixed groups";
	    case 25: return "Direct sums, direct products, etc.";
	    case 27: return "Subgroups";
	    case 30: return "Automorphisms, homomorphisms, endomorphisms, etc.";
	    case 35: return "Extensions";
	    case 40: return "Homological and categorical methods";
	    case 45: return "Topological methods";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'L': // Groupoids (i.e. small categories in which all morphisms are isomorphisms)
	  switch(min)
	    {
	    case  5: return "Groupoids (i.e. small categories in which all morphisms are isomorphisms)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'M': // Semigroups
	  switch(min)
	    {
	    case  5: return "Free semigroups, generators and relations, word problems";
	    case  7: return "Varieties and pseudovarieties of semigroups";
	    case 10: return "General structure theory";
	    case 11: return "Radical theory";
	    case 12: return "Ideal theory";
	    case 13: return "Arithmetic theory of monoids";
	    case 14: return "Commutative semigroups";
	    case 15: return "Mappings of semigroups";
	    case 17: return "Regular semigroups";
	    case 18: return "Inverse semigroups";
	    case 19: return "Orthodox semigroups";
	    case 20: return "Semigroups of transformations, etc.";
	    case 25: return "Semigroup rings, multiplicative semigroups of rings";
	    case 30: return "Representation of semigroups; actions of semigroups on sets";
	    case 32: return "Algebraic monoids";
	    case 35: return "Semigroups in automata theory, linguistics, etc.";
	    case 50: return "Connections of semigroups with homological algebra and category theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'N': // Other generalizations of groups
	  switch(min)
	    {
	    case  2: return "Sets with a single binary operation (groupoids)";
	    case  5: return "Loops, quasigroups";
	    case 10: return "Ternary systems (heaps, semiheaps, heapoids, etc.)";
	    case 15: return "n-ary systems (n≥3)";
	    case 20: return "Hypergroups";
	    case 25: return "Fuzzy groups";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'P': // Probabilistic methods in group theory
	  switch(min)
	    {
	    case  5: return "Probabilistic methods in group theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 22: // Topological groups, Lie groups
      switch (med)
	{
	case 'A': // Topological and differentiable algebraic systems
	  switch(min)
	    {
	    case  5: return "Structure of general topological groups";
	    case 10: return "Analysis on general topological groups";
	    case 15: return "Structure of topological semigroups";
	    case 20: return "Analysis on topological semigroups";
	    case 22: return "Topological groupoids (including differentiable and Lie groupoids)";
	    case 25: return "Representations of general topological groups and semigroups";
	    case 26: return "Topological semilattices, lattices and applications";
	    case 30: return "Other topological algebraic systems and their representations";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Locally compact abelian groups (LCA groups)
	  switch(min)
	    {
	    case  5: return "General properties and structure of LCA groups";
	    case 10: return "Structure of group algebras of LCA groups";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Compact groups
	  switch(min)
	    {
	    case  5: return "Compact groups";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Locally compact groups and their algebras
	  switch(min)
	    {
	    case  5: return "General properties and structure of locally compact groups";
	    case 10: return "Unitary representations of locally compact groups";
	    case 12: return "Other representations of locally compact groups";
	    case 15: return "Group algebras of locally compact groups";
	    case 20: return "Representations of group algebras";
	    case 25: return "C*-algebras and W*-algebras in relation to group representations";
	    case 30: return "Induced representations";
	    case 35: return "Duality theorems";
	    case 40: return "Ergodic theory on groups";
	    case 45: return "Automorphism groups of locally compact groups";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Lie groups
	  switch(min)
	    {
	    case  5: return "Local Lie groups";
	    case 10: return "General properties and structure of complex Lie groups";
	    case 15: return "General properties and structure of real Lie groups";
	    case 20: return "General properties and structure of other Lie groups";
	    case 25: return "Nilpotent and solvable Lie groups";
	    case 27: return "Representations of nilpotent and solvable Lie groups (special orbital integrals, non-type I representations, etc.)";
	    case 30: return "Analysis on real and complex Lie groups";
	    case 35: return "Analysis on p-adic Lie groups";
	    case 40: return "Discrete subgroups of Lie groups";
	    case 41: return "Continuous cohomology";
	    case 43: return "Structure and representation of the Lorentz group";
	    case 45: return "Representations of Lie and linear algebraic groups over real fields: analytic methods";
	    case 46: return "Semisimple Lie groups and their representations";
	    case 47: return "Representations of Lie and real algebraic groups: algebraic methods (Verma modules, etc.)";
	    case 50: return "Representations of Lie and linear algebraic groups over local fields";
	    case 55: return "Representations of Lie and linear algebraic groups over global fields and adèle rings";
	    case 57: return "Geometric Langlands program: representation-theoretic aspects";
	    case 60: return "Lie algebras of Lie groups";
	    case 65: return "Infinite-dimensional Lie groups and their Lie algebras: general properties";
	    case 66: return "Analysis on and representations of infinite-dimensional Lie groups";
	    case 67: return "Loop groups and related constructions, group-theoretic treatment";
	    case 70: return "Applications of Lie groups to physics; explicit representations";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // Noncompact transformation groups
	  switch(min)
	    {
	    case  5: return "General theory of group and pseudogroup actions";
	    case 10: return "Measurable group actions";
	    case 30: return "Homogeneous spaces";
	    case 50: return "Groups as automorphisms of other structures";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 26: // Real functions
      switch (med)
	{
	case 'A': // Functions of one variable
	  switch(min)
	    {
	    case  3: return "Foundations: limits and generalizations, elementary topology of the line";
	    case  6: return "One-variable calculus";
	    case  9: return "Elementary functions";
	    case 12: return "Rate of growth of functions, orders of infinity, slowly varying functions";
	    case 15: return "Continuity and related questions (modulus of continuity, semicontinuity, discontinuities, etc.)";
	    case 16: return "Lipschitz (Hölder) classes";
	    case 18: return "Iteration";
	    case 21: return "Classification of real functions; Baire classification of sets and functions";
	    case 24: return "Differentiation (functions of one variable): general theory, generalized derivatives, mean-value theorems";
	    case 27: return "Nondifferentiability (nondifferentiable functions, points of nondifferentiability), discontinuous derivatives";
	    case 30: return "Singular functions, Cantor functions, functions with other special properties";
	    case 33: return "Fractional derivatives and integrals";
	    case 36: return "Antidifferentiation";
	    case 39: return "Denjoy and Perron integrals, other special integrals";
	    case 42: return "Integrals of Riemann, Stieltjes and Lebesgue type";
	    case 45: return "Functions of bounded variation, generalizations";
	    case 46: return "Absolutely continuous functions";
	    case 48: return "Monotonic functions, generalizations";
	    case 51: return "Convexity, generalizations";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Functions of several variables
	  switch(min)
	    {
	    case  5: return "Continuity and differentiation questions";
	    case 10: return "Implicit function theorems, Jacobians, transformations with several variables";
	    case 12: return "Calculus of vector functions";
	    case 15: return "Integration: length, area, volume";
	    case 20: return "Integral formulas (Stokes, Gauss, Green, etc.)";
	    case 25: return "Convexity, generalizations";
	    case 30: return "Absolutely continuous functions, functions of bounded variation";
	    case 35: return "Special properties of functions of several variables, Hölder conditions, etc.";
	    case 40: return "Representation and superposition of functions";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Polynomials, rational functions
	  switch(min)
	    {
	    case  5: return "Polynomials: analytic properties, etc.";
	    case 10: return "Polynomials: location of zeros";
	    case 15: return "Rational functions";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Inequalities
	  switch(min)
	    {
	    case  5: return "Inequalities for trigonometric functions and polynomials";
	    case  7: return "Inequalities involving other types of functions";
	    case 10: return "Inequalities involving derivatives and differential and integral operators";
	    case 15: return "Inequalities for sums, series and integrals";
	    case 20: return "Other analytical inequalities";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Miscellaneous topics
	  switch(min)
	    {
	    case  5: return "Real-analytic functions";
	    case 10: return "C∞-functions, quasi-analytic functions";
	    case 15: return "Calculus of functions on infinite-dimensional spaces";
	    case 20: return "Calculus of functions taking values in infinite-dimensional spaces";
	    case 25: return "Set-valued functions";
	    case 30: return "Non-Archimedean analysis";
	    case 35: return "Nonstandard analysis";
	    case 40: return "Constructive real analysis";
	    case 50: return "Fuzzy real analysis";
	    case 60: return "Means";
	    case 70: return "Real analysis on time scales or measure chains";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 28: // Measure and integration
      switch (med)
	{
	case 'A': // Classical measure theory
	  switch(min)
	    {
	    case  5: return "Classes of sets (Borel fields, σ-rings, etc.), measurable sets, Suslin sets, analytic sets";
	    case 10: return "Real- or complex-valued set functions";
	    case 12: return "Contents, measures, outer measures, capacities";
	    case 15: return "Abstract differentiation theory, differentiation of set functions";
	    case 20: return "Measurable and nonmeasurable functions, sequences of measurable functions, modes of convergence";
	    case 25: return "Integration with respect to measures and other set functions";
	    case 33: return "Spaces of measures, convergence of measures";
	    case 35: return "Measures and integrals in product spaces";
	    case 50: return "Integration and disintegration of measures";
	    case 51: return "Lifting theory";
	    case 60: return "Measures on Boolean rings, measure algebras";
	    case 75: return "Length, area, volume, other geometric measure theory";
	    case 78: return "Hausdorff and packing measures";
	    case 80: return "Fractals";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Set functions, measures and integrals with values in abstract spaces
	  switch(min)
	    {
	    case  5: return "Vector-valued set functions, measures and integrals";
	    case 10: return "Group- or semigroup-valued set functions, measures and integrals";
	    case 15: return "Set functions, measures and integrals with values in ordered spaces";
	    case 20: return "Set-valued set functions and measures; integration of set-valued functions; measurable selections";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Set functions and measures on spaces with additional structure
	  switch(min)
	    {
	    case  5: return "Integration theory via linear functionals (Radon measures, Daniell integrals, etc.), representing set functions and measures";
	    case 10: return "Set functions and measures on topological groups or semigroups, Haar measures, invariant measures";
	    case 15: return "Set functions and measures on topological spaces (regularity of measures, etc.)";
	    case 20: return "Set functions and measures and integrals in infinite-dimensional spaces (Wiener measure, Gaussian measure, etc.)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Measure-theoretic ergodic theory
	  switch(min)
	    {
	    case  5: return "Measure-preserving transformations";
	    case 10: return "One-parameter continuous families of measure-preserving transformations";
	    case 15: return "General groups of measure-preserving transformations";
	    case 20: return "Entropy and other invariants";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Miscellaneous topics in measure theory
	  switch(min)
	    {
	    case  5: return "Nonstandard measure theory";
	    case 10: return "Fuzzy measure theory";
	    case 15: return "Other connections with logic and set theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 30: // Functions of a complex variable
      switch (med)
	{
	case 'A': // General properties
	  switch(min)
	    {
	    case  5: return "Monogenic properties of complex functions (including polygenic and areolar monogenic functions)";
	    case 10: return "Inequalities in the complex domain";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Series expansions
	  switch(min)
	    {
	    case 10: return "Power series (including lacunary series)";
	    case 20: return "Random power series";
	    case 30: return "Boundary behavior of power series, over-convergence";
	    case 40: return "Analytic continuation";
	    case 50: return "Dirichlet series and other series expansions, exponential series";
	    case 60: return "Completeness problems, closure of a system of functions";
	    case 70: return "Continued fractions";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Geometric function theory
	  switch(min)
	    {
	    case 10: return "Polynomials";
	    case 15: return "Zeros of polynomials, rational functions, and other analytic functions (e.g. zeros of functions with bounded Dirichlet integral)";
	    case 20: return "Conformal mappings of special domains";
	    case 25: return "Covering theorems in conformal mapping theory";
	    case 30: return "Numerical methods in conformal mapping theory";
	    case 35: return "General theory of conformal mappings";
	    case 40: return "Kernel functions and applications";
	    case 45: return "Special classes of univalent and multivalent functions (starlike, convex, bounded rotation, etc.)";
	    case 50: return "Coefficient problems for univalent and multivalent functions";
	    case 55: return "General theory of univalent and multivalent functions";
	    case 62: return "Quasiconformal mappings in the plane";
	    case 65: return "Quasiconformal mappings in Rⁿ, other generalizations";
	    case 70: return "Extremal problems for conformal and quasiconformal mappings, variational methods";
	    case 75: return "Extremal problems for conformal and quasiconformal mappings, other methods";
	    case 80: return "Maximum principle; Schwarz's lemma, Lindelöf principle, analogues and generalizations; subordination";
	    case 85: return "Capacity and harmonic measure in the complex plane";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Entire and meromorphic functions, and related topics
	  switch(min)
	    {
	    case  5: return "Functional equations in the complex domain, iteration and composition of analytic functions";
	    case 10: return "Representations of entire functions by series and integrals";
	    case 15: return "Special classes of entire functions and growth estimates";
	    case 20: return "Entire functions, general theory";
	    case 30: return "Meromorphic functions, general theory";
	    case 35: return "Distribution of values, Nevanlinna theory";
	    case 40: return "Cluster sets, prime ends, boundary behavior";
	    case 45: return "Bloch functions, normal functions, normal families";
	    case 60: return "Quasi-analytic and other classes of functions";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Miscellaneous topics of analysis in the complex domain
	  switch(min)
	    {
	    case  5: return "Moment problems, interpolation problems";
	    case 10: return "Approximation in the complex domain";
	    case 15: return "Asymptotic representations in the complex domain";
	    case 20: return "Integration, integrals of Cauchy type, integral representations of analytic functions";
	    case 25: return "Boundary value problems";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // Riemann surfaces
	  switch(min)
	    {
	    case 10: return "Compact Riemann surfaces and uniformization";
	    case 15: return "Harmonic functions on Riemann surfaces";
	    case 20: return "Classification theory of Riemann surfaces";
	    case 25: return "Ideal boundary theory";
	    case 30: return "Differentials on Riemann surfaces";
	    case 35: return "Fuchsian groups and automorphic functions";
	    case 40: return "Kleinian groups";
	    case 45: return "Conformal metrics (hyperbolic, Poincaré, distance functions)";
	    case 50: return "Klein surfaces";
	    case 60: return "Teichmüller theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'G': // Generalized function theory
	  switch(min)
	    {
	    case  6: return "Non-Archimedean function theory";
	    case 12: return "Finely holomorphic functions and topological function theory";
	    case 20: return "Generalizations of Bers or Vekua type (pseudoanalytic, p-analytic, etc.)";
	    case 25: return "Discrete analytic functions";
	    case 30: return "Other generalizations of analytic functions (including abstract-valued functions)";
	    case 35: return "Functions of hypercomplex variables and generalized variables";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'H': // Spaces and algebras of analytic functions
	  switch(min)
	    {
	    case  5: return "Bounded analytic functions";
	    case 10: return "Hardy spaces";
	    case 15: return "Nevanlinna class and Smirnov class";
	    case 20: return "Bergman spaces, Fock spaces";
	    case 25: return "Besov spaces and Qp-spaces";
	    case 30: return "Bloch spaces";
	    case 35: return "BMO-spaces";
	    case 50: return "Algebras of analytic functions";
	    case 80: return "Corona theorems";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'J': // Function theory on the disc
	  switch(min)
	    {
	    case  5: return "Inner functions";
	    case 10: return "Blaschke products";
	    case 15: return "Singular inner functions";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'K': // Universal holomorphic functions
	  switch(min)
	    {
	    case  5: return "Universal Taylor series";
	    case 10: return "Universal Dirichlet series";
	    case 15: return "Bounded universal functions";
	    case 20: return "Compositional universality";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'L': // Analysis on metric spaces
	  switch(min)
	    {
	    case  5: return "Geometric embeddings of metric spaces";
	    case 10: return "Quasiconformal mappings in metric spaces";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 31: // Potential theory
      switch (med)
	{
	case 'A': // Two-dimensional theory
	  switch(min)
	    {
	    case  5: return "Harmonic, subharmonic, superharmonic functions";
	    case 10: return "Integral representations, integral operators, integral equations methods";
	    case 15: return "Potentials and capacity, harmonic measure, extremal length";
	    case 20: return "Boundary behavior (theorems of Fatou type, etc.)";
	    case 25: return "Boundary value and inverse problems";
	    case 30: return "Biharmonic, polyharmonic functions and equations, Poisson's equation";
	    case 35: return "Connections with differential equations";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Higher-dimensional theory
	  switch(min)
	    {
	    case  5: return "Harmonic, subharmonic, superharmonic functions";
	    case 10: return "Integral representations, integral operators, integral equations methods";
	    case 15: return "Potentials and capacities, extremal length";
	    case 20: return "Boundary value and inverse problems";
	    case 25: return "Boundary behavior";
	    case 30: return "Biharmonic and polyharmonic equations and functions";
	    case 35: return "Connections with differential equations";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Other generalizations
	  switch(min)
	    {
	    case  5: return "Harmonic, subharmonic, superharmonic functions";
	    case 10: return "Pluriharmonic and plurisubharmonic functions";
	    case 12: return "Potential theory on Riemannian manifolds";
	    case 15: return "Potentials and capacities";
	    case 20: return "Discrete potential theory and numerical methods";
	    case 25: return "Dirichlet spaces";
	    case 35: return "Martin boundary theory";
	    case 40: return "Fine potential theory";
	    case 45: return "Other generalizations (nonlinear potential theory, etc.)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Axiomatic potential theory
	  switch(min)
	    {
	    case  5: return "Axiomatic potential theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Potential theory on metric spaces
	  switch(min)
	    {
	    case  5: return "Potential theory on metric spaces";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 32: // Several complex variables
      switch (med)
	{
	case 'A': // Holomorphic functions of several complex variables
	  switch(min)
	    {
	    case  5: return "Power series, series of functions";
	    case  7: return "Special domains (Reinhardt, Hartogs, circular, tube)";
	    case 10: return "Holomorphic functions";
	    case 12: return "Multifunctions";
	    case 15: return "Entire functions";
	    case 17: return "Special families of functions";
	    case 18: return "Bloch functions, normal functions";
	    case 19: return "Normal families of functions, mappings";
	    case 20: return "Meromorphic functions";
	    case 22: return "Nevanlinna theory (local); growth estimates; other inequalities";
	    case 25: return "Integral representations; canonical kernels (Szegő, Bergman, etc.)";
	    case 26: return "Integral representations, constructed kernels (e.g. Cauchy, Fantappiè-type kernels)";
	    case 27: return "Local theory of residues";
	    case 30: return "Other generalizations of function theory of one complex variable";
	    case 35: return "Hp-spaces, Nevanlinna spaces";
	    case 36: return "Bergman spaces";
	    case 37: return "Other spaces of holomorphic functions (e.g. bounded mean oscillation (BMOA), vanishing mean oscillation (VMOA))";
	    case 38: return "Algebras of holomorphic functions";
	    case 40: return "Boundary behavior of holomorphic functions";
	    case 45: return "Hyperfunctions";
	    case 50: return "Harmonic analysis of several complex variables";
	    case 55: return "Singular integrals";
	    case 60: return "Zero sets of holomorphic functions";
	    case 65: return "Banach algebra techniques";
	    case 70: return "Functional analysis techniques";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Local analytic geometry
	  switch(min)
	    {
	    case  5: return "Analytic algebras and generalizations, preparation theorems";
	    case 10: return "Germs of analytic sets, local parametrization";
	    case 15: return "Analytic subsets of affine space";
	    case 20: return "Semi-analytic sets and subanalytic sets";
	    case 25: return "Triangulation and related questions";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Analytic spaces
	  switch(min)
	    {
	    case  5: return "Real-analytic manifolds, real-analytic spaces";
	    case  7: return "Real-analytic sets, complex Nash functions";
	    case  9: return "Embedding of real analytic manifolds";
	    case 11: return "Complex supergeometry";
	    case 15: return "Complex spaces";
	    case 18: return "Topology of analytic spaces";
	    case 20: return "Normal analytic spaces";
	    case 22: return "Embedding of analytic spaces";
	    case 25: return "Analytic subsets and submanifolds";
	    case 30: return "Integration on analytic sets and spaces, currents";
	    case 35: return "Analytic sheaves and cohomology groups";
	    case 36: return "Local cohomology of analytic spaces";
	    case 37: return "Duality theorems";
	    case 38: return "Sheaves of differential operators and their modules, D-modules";
	    case 55: return "The Levi problem in complex spaces; generalizations";
	    case 81: return "Applications to physics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Analytic continuation
	  switch(min)
	    {
	    case  5: return "Domains of holomorphy";
	    case 10: return "Envelopes of holomorphy";
	    case 15: return "Continuation of analytic objects";
	    case 20: return "Removable singularities";
	    case 26: return "Riemann domains";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Holomorphic convexity
	  switch(min)
	    {
	    case  5: return "Holomorphically convex complex spaces, reduction theory";
	    case 10: return "Stein spaces, Stein manifolds";
	    case 20: return "Polynomial convexity";
	    case 30: return "Holomorphic and polynomial approximation, Runge pairs, interpolation";
	    case 35: return "Global boundary behavior of holomorphic functions";
	    case 40: return "The Levi problem";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // Geometric convexity
	  switch(min)
	    {
	    case 10: return "q-convexity, q-concavity";
	    case 17: return "Other notions of convexity";
	    case 18: return "Finite-type conditions";
	    case 27: return "Topological consequences of geometric convexity";
	    case 32: return "Analytical consequences of geometric convexity (vanishing theorems, etc.)";
	    case 45: return "Invariant metrics and pseudodistances";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'G': // Deformations of analytic structures
	  switch(min)
	    {
	    case  5: return "Deformations of complex structures";
	    case  7: return "Deformations of special (e.g. CR) structures";
	    case  8: return "Deformations of fiber bundles";
	    case 10: return "Deformations of submanifolds and subspaces";
	    case 13: return "Analytic moduli problems";
	    case 15: return "Moduli of Riemann surfaces, Teichmüller theory";
	    case 20: return "Period matrices, variation of Hodge structure; degenerations";
	    case 34: return "Moduli and deformations for ordinary differential equations (e.g. Knizhnik-Zamolodchikov equation)";
	    case 81: return "Applications to physics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'H': // Holomorphic mappings and correspondences
	  switch(min)
	    {
	    case  2: return "Holomorphic mappings, (holomorphic) embeddings and related questions";
	    case  4: return "Meromorphic mappings";
	    case 12: return "Boundary uniqueness of mappings";
	    case 25: return "Picard-type theorems and generalizations";
	    case 30: return "Value distribution theory in higher dimensions";
	    case 35: return "Proper mappings, finiteness theorems";
	    case 40: return "Boundary regularity of mappings";
	    case 50: return "Iteration problems";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'J': // Compact analytic spaces
	  switch(min)
	    {
	    case  5: return "Compactification of analytic spaces";
	    case 10: return "Algebraic dependence theorems";
	    case 15: return "Compact surfaces";
	    case 17: return "Compact 3-folds";
	    case 18: return "Compact n-folds";
	    case 25: return "Transcendental methods of algebraic geometry";
	    case 27: return "Compact Kähler manifolds: generalizations, classification";
	    case 81: return "Applications to physics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'K': // Generalizations of analytic spaces
	  switch(min)
	    {
	    case  5: return "Banach analytic spaces";
	    case  7: return "Formal and graded complex spaces";
	    case 15: return "Differentiable functions on analytic spaces, differentiable spaces";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'L': // Holomorphic fiber spaces
	  switch(min)
	    {
	    case  5: return "Holomorphic bundles and generalizations";
	    case 10: return "Sheaves and cohomology of sections of holomorphic vector bundles, general results";
	    case 15: return "Bundle convexity";
	    case 20: return "Vanishing theorems";
	    case 25: return "Twistor theory, double fibrations";
	    case 81: return "Applications to physics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'M': // Complex spaces with a group of automorphisms
	  switch(min)
	    {
	    case  5: return "Complex Lie groups, automorphism groups acting on complex spaces";
	    case 10: return "Homogeneous complex manifolds";
	    case 12: return "Almost homogeneous manifolds and spaces";
	    case 15: return "Hermitian symmetric spaces, bounded symmetric domains, Jordan algebras";
	    case 17: return "Automorphism groups of Cⁿ and affine manifolds";
	    case 25: return "Complex vector fields";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'N': // Automorphic functions
	  switch(min)
	    {
	    case  5: return "General theory of automorphic functions of several complex variables";
	    case 10: return "Automorphic forms";
	    case 15: return "Automorphic functions in symmetric domains";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'P': // Non-Archimedean analysis
	  switch(min)
	    {
	    case  5: return "Non-Archimedean analysis";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'Q': // Complex manifolds
	  switch(min)
	    {
	    case  5: return "Negative curvature manifolds";
	    case 10: return "Positive curvature manifolds";
	    case 15: return "Kähler manifolds";
	    case 20: return "Kähler-Einstein manifolds";
	    case 25: return "Calabi-Yau theory";
	    case 26: return "Notions of stability";
	    case 28: return "Stein manifolds";
	    case 30: return "Uniformization";
	    case 35: return "Complex manifolds as subdomains of Euclidean space";
	    case 40: return "Embedding theorems";
	    case 45: return "Hyperbolic and Kobayashi hyperbolic manifolds";
	    case 55: return "Topological aspects of complex manifolds";
	    case 57: return "Classification theorems";
	    case 60: return "Almost complex manifolds";
	    case 65: return "Pseudoholomorphic curves";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'S': // Singularities
	  switch(min)
	    {
	    case  5: return "Local singularities";
	    case 10: return "Invariants of analytic local rings";
	    case 15: return "Equisingularity (topological and analytic)";
	    case 20: return "Global theory of singularities; cohomological properties";
	    case 22: return "Relations with arrangements of hyperplanes";
	    case 25: return "Surface and hypersurface singularities";
	    case 30: return "Deformations of singularities; vanishing cycles";
	    case 35: return "Mixed Hodge theory of singular varieties";
	    case 40: return "Monodromy; relations with differential equations and D-modules";
	    case 45: return "Modifications; resolution of singularities";
	    case 50: return "Topological aspects: Lefschetz theorems, topological classification, invariants";
	    case 55: return "Milnor fibration; relations with knot theory";
	    case 60: return "Stratifications; constructible sheaves; intersection cohomology";
	    case 65: return "Singularities of holomorphic vector fields and foliations";
	    case 70: return "Other operations on singularities";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'T': // Pseudoconvex domains
	  switch(min)
	    {
	    case  5: return "Domains of holomorphy";
	    case 15: return "Strongly pseudoconvex domains";
	    case 20: return "Worm domains";
	    case 25: return "Finite type domains";
	    case 27: return "Geometric and analytic invariants on weakly pseudoconvex boundaries";
	    case 35: return "Exhaustion functions";
	    case 40: return "Peak functions";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'U': // Pluripotential theory
	  switch(min)
	    {
	    case  5: return "Plurisubharmonic functions and generalizations";
	    case 10: return "Plurisubharmonic exhaustion functions";
	    case 15: return "General pluripotential theory";
	    case 20: return "Capacity theory and generalizations";
	    case 25: return "Lelong numbers";
	    case 30: return "Removable sets";
	    case 35: return "Pluricomplex Green functions";
	    case 40: return "Currents";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'V': // CR manifolds
	  switch(min)
	    {
	    case  5: return "CR structures, CR operators, and generalizations";
	    case 10: return "CR functions";
	    case 15: return "CR manifolds as boundaries of domains";
	    case 20: return "Analysis on CR manifolds";
	    case 25: return "Extension of functions and other analytic objects from CR manifolds";
	    case 30: return "Embeddings of CR manifolds";
	    case 35: return "Finite type conditions on CR manifolds";
	    case 40: return "Real submanifolds in complex manifolds";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'W': // Differential operators in several variables
	  switch(min)
	    {
	    case  5: return "∂¯ and ∂¯-Neumann operators";
	    case 10: return "∂¯b and ∂¯b-Neumann operators";
	    case 20: return "Complex Monge-Ampère operators";
	    case 25: return "Pseudodifferential operators in several complex variables";
	    case 30: return "Heat kernels in several complex variables";
	    case 50: return "Other partial differential equations of complex analysis";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 33: // Special functions
      switch (med)
	{
	case 'B': // Elementary classical functions
	  switch(min)
	    {
	    case 10: return "Exponential and trigonometric functions";
	    case 15: return "Gamma, beta and polygamma functions";
	    case 20: return "Incomplete beta and gamma functions (error functions, probability integral, Fresnel integrals)";
	    case 30: return "Higher logarithm functions";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Hypergeometric functions
	  switch(min)
	    {
	    case  5: return "Classical hypergeometric functions, ₂F₁";
	    case 10: return "Bessel and Airy functions, cylinder functions, ₀F₁";
	    case 15: return "Confluent hypergeometric functions, Whittaker functions, ₁F₁";
	    case 20: return "Generalized hypergeometric series, pFq";
	    case 45: return "Orthogonal polynomials and functions of hypergeometric type (Jacobi, Laguerre, Hermite, Askey scheme, etc.)";
	    case 47: return "Other special orthogonal polynomials and functions";
	    case 50: return "Orthogonal polynomials and functions in several variables expressible in terms of special functions in one variable";
	    case 52: return "Orthogonal polynomials and functions associated with root systems";
	    case 55: return "Spherical harmonics";
	    case 60: return "Hypergeometric integrals and functions defined by them (E, G, H and I functions)";
	    case 65: return "Appell, Horn and Lauricella functions";
	    case 67: return "Hypergeometric functions associated with root systems";
	    case 70: return "Other hypergeometric functions and integrals in several variables";
	    case 75: return "Elliptic integrals as hypergeometric functions";
	    case 80: return "Connections with groups and algebras, and related topics";
	    case 90: return "Applications";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Basic hypergeometric functions
	  switch(min)
	    {
	    case  5: return "q-gamma functions, q-beta functions and integrals";
	    case 15: return "Basic hypergeometric functions in one variable, rφs";
	    case 45: return "Basic orthogonal polynomials and functions (Askey-Wilson polynomials, etc.)";
	    case 50: return "Orthogonal polynomials and functions in several variables expressible in terms of basic hypergeometric functions in one variable";
	    case 52: return "Basic orthogonal polynomials and functions associated with root systems (Macdonald polynomials, etc.)";
	    case 60: return "Basic hypergeometric integrals and functions defined by them";
	    case 65: return "Bibasic functions and multiple bases";
	    case 67: return "Basic hypergeometric functions associated with root systems";
	    case 70: return "Other basic hypergeometric functions and integrals in several variables";
	    case 80: return "Connections with quantum groups, Chevalley groups, p-adic groups, Hecke algebras, and related topics";
	    case 90: return "Applications";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Other special functions
	  switch(min)
	    {
	    case  5: return "Elliptic functions and integrals";
	    case 10: return "Lamé, Mathieu, and spheroidal wave functions";
	    case 12: return "Mittag-Leffler functions and generalizations";
	    case 15: return "Other wave functions";
	    case 17: return "Painlevé-type functions";
	    case 20: return "Other functions defined by series and integrals";
	    case 30: return "Other functions coming from differential, difference and integral equations";
	    case 50: return "Special functions in characteristic p (gamma functions, etc.)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // Computational aspects
	  switch(min)
	    {
	    case  5: return "Numerical approximation and evaluation";
	    case 10: return "Symbolic computation (Gosper and Zeilberger algorithms, etc.)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 34: // Ordinary differential equations
      switch (med)
	{
	case 'A': // General theory
	  switch(min)
	    {
	    case  5: return "Explicit solutions and reductions";
	    case  7: return "Fuzzy differential equations";
	    case  8: return "Fractional differential equations";
	    case  9: return "Implicit equations, differential-algebraic equations";
	    case 12: return "Initial value problems, existence, uniqueness, continuous dependence and continuation of solutions";
	    case 25: return "Analytical theory: series, transformations, transforms, operational calculus, etc.";
	    case 26: return "Geometric methods in differential equations";
	    case 30: return "Linear equations and systems, general";
	    case 33: return "Lattice differential equations";
	    case 34: return "Nonlinear equations and systems, general";
	    case 35: return "Differential equations of infinite order";
	    case 36: return "Discontinuous equations";
	    case 37: return "Differential equations with impulses";
	    case 38: return "Hybrid systems";
	    case 40: return "Differential inequalities";
	    case 45: return "Theoretical approximation of solutions";
	    case 55: return "Inverse problems";
	    case 60: return "Differential inclusions";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Boundary value problems
	  switch(min)
	    {
	    case  5: return "Linear boundary value problems";
	    case  7: return "Linear boundary value problems with nonlinear dependence on the spectral parameter";
	    case  8: return "Parameter dependent boundary value problems";
	    case  9: return "Boundary eigenvalue problems";
	    case 10: return "Nonlocal and multipoint boundary value problems";
	    case 15: return "Nonlinear boundary value problems";
	    case 16: return "Singular nonlinear boundary value problems";
	    case 18: return "Positive solutions of nonlinear boundary value problems";
	    case 20: return "Weyl theory and its generalizations";
	    case 24: return "Sturm-Liouville theory";
	    case 27: return "Green functions";
	    case 30: return "Special equations (Mathieu, Hill, Bessel, etc.)";
	    case 37: return "Boundary value problems with impulses";
	    case 40: return "Boundary value problems on infinite intervals";
	    case 45: return "Boundary value problems on graphs and networks";
	    case 60: return "Applications";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Qualitative theory
	  switch(min)
	    {
	    case  5: return "Location of integral curves, singular points, limit cycles";
	    case  7: return "Theory of limit cycles of polynomial and analytic vector fields (existence, uniqueness, bounds, Hilbert's 16th problem and ramifications)";
	    case  8: return "Connections with real algebraic geometry (fewnomials, desingularization, zeros of Abelian integrals, etc.)";
	    case 10: return "Oscillation theory, zeros, disconjugacy and comparison theory";
	    case 11: return "Growth, boundedness";
	    case 12: return "Monotone systems";
	    case 14: return "Symmetries, invariants";
	    case 15: return "Nonlinear oscillations, coupled oscillators";
	    case 20: return "Transformation and reduction of equations and systems, normal forms";
	    case 23: return "Bifurcation";
	    case 25: return "Periodic solutions";
	    case 26: return "Relaxation oscillations";
	    case 27: return "Almost and pseudo-almost periodic solutions";
	    case 28: return "Complex behavior, chaotic systems";
	    case 29: return "Averaging method";
	    case 37: return "Homoclinic and heteroclinic solutions";
	    case 40: return "Equations and systems on manifolds";
	    case 41: return "Equivalence, asymptotic equivalence";
	    case 45: return "Invariant manifolds";
	    case 46: return "Multifrequency systems";
	    case 55: return "Hysteresis";
	    case 60: return "Qualitative investigation and simulation of models";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Stability theory
	  switch(min)
	    {
	    case  5: return "Asymptotic properties";
	    case  6: return "Synchronization";
	    case  8: return "Characteristic and Lyapunov exponents";
	    case  9: return "Dichotomy, trichotomy";
	    case 10: return "Perturbations";
	    case 15: return "Singular perturbations";
	    case 20: return "Stability";
	    case 23: return "Global stability";
	    case 30: return "Structural stability and analogous concepts";
	    case 35: return "Stability of manifolds of solutions";
	    case 45: return "Attractors";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Asymptotic theory
	  switch(min)
	    {
	    case  5: return "Asymptotic expansions";
	    case 10: return "Perturbations, asymptotics";
	    case 13: return "Multiple scale methods";
	    case 15: return "Singular perturbations, general theory";
	    case 17: return "Canard solutions";
	    case 18: return "Methods of nonstandard analysis";
	    case 20: return "Singular perturbations, turning point theory, WKB methods";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // Equations and systems with randomness
	  switch(min)
	    {
	    case  5: return "Equations and systems with randomness";
	    case 10: return "Bifurcation";
	    case 15: return "Resonance phenomena";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'G': // Differential equations in abstract spaces
	  switch(min)
	    {
	    case 10: return "Linear equations";
	    case 20: return "Nonlinear equations";
	    case 25: return "Evolution inclusions";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'H': // Control problems
	  switch(min)
	    {
	    case  5: return "Control problems";
	    case 10: return "Chaos control";
	    case 15: return "Stabilization";
	    case 20: return "Bifurcation control";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'K': // Functional-differential and differential-difference equations
	  switch(min)
	    {
	    case  5: return "General theory";
	    case  6: return "Linear functional-differential equations";
	    case  7: return "Theoretical approximation of solutions";
	    case  8: return "Spectral theory of functional-differential operators";
	    case  9: return "Functional-differential inclusions";
	    case 10: return "Boundary value problems";
	    case 11: return "Oscillation theory";
	    case 12: return "Growth, boundedness, comparison of solutions";
	    case 13: return "Periodic solutions";
	    case 14: return "Almost and pseudo-periodic solutions";
	    case 17: return "Transformation and reduction of equations and systems, normal forms";
	    case 18: return "Bifurcation theory";
	    case 19: return "Invariant manifolds";
	    case 20: return "Stability theory";
	    case 21: return "Stationary solutions";
	    case 23: return "Complex (chaotic) behavior of solutions";
	    case 25: return "Asymptotic theory";
	    case 26: return "Singular perturbations";
	    case 27: return "Perturbations";
	    case 28: return "Numerical approximation of solutions";
	    case 29: return "Inverse problems";
	    case 30: return "Equations in abstract spaces";
	    case 31: return "Lattice functional-differential equations";
	    case 32: return "Implicit equations";
	    case 33: return "Averaging";
	    case 34: return "Hybrid systems";
	    case 35: return "Control problems";
	    case 36: return "Fuzzy functional-differential equations";
	    case 37: return "Functional-differential equations with fractional derivatives";
	    case 38: return "Functional-differential inequalities";
	    case 40: return "Neutral equations";
	    case 45: return "Equations with impulses";
	    case 50: return "Stochastic functional-differential equations";
	    case 60: return "Qualitative investigation and simulation of models";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'L': // Ordinary differential operators
	  switch(min)
	    {
	    case  5: return "General spectral theory";
	    case 10: return "Eigenfunctions, eigenfunction expansions, completeness of eigenfunctions";
	    case 15: return "Eigenvalues, estimation of eigenvalues, upper and lower bounds";
	    case 16: return "Numerical approximation of eigenvalues and of other parts of the spectrum";
	    case 20: return "Asymptotic distribution of eigenvalues, asymptotic theory of eigenfunctions";
	    case 25: return "Scattering theory, inverse scattering";
	    case 30: return "Nonlinear ordinary differential operators";
	    case 40: return "Particular operators (Dirac, one-dimensional Schrödinger, etc.)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'M': // Differential equations in the complex domain
	  switch(min)
	    {
	    case  3: return "Linear equations and systems";
	    case  5: return "Entire and meromorphic solutions";
	    case 10: return "Oscillation, growth of solutions";
	    case 15: return "Algebraic aspects (differential-algebraic, hypertranscendence, group-theoretical)";
	    case 25: return "Formal solutions, transform techniques";
	    case 30: return "Asymptotics, summation methods";
	    case 35: return "Singularities, monodromy, local behavior of solutions, normal forms";
	    case 40: return "Stokes phenomena and connection problems (linear and nonlinear)";
	    case 45: return "Differential equations on complex manifolds";
	    case 50: return "Inverse problems (Riemann-Hilbert, inverse differential Galois, etc.)";
	    case 55: return "Painlevé and other special equations; classification, hierarchies;";
	    case 56: return "Isomonodromic deformations";
	    case 60: return "Singular perturbation problems in the complex domain (complex WKB, turning points, steepest descent)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'N': // Dynamic equations on time scales or measure chains
	  switch(min)
	    {
	    case  5: return "Dynamic equations on time scales or measure chains";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 35: // Partial differential equations
      switch (med)
	{
	case 'A': // General topics
	  switch(min)
	    {
	    case  1: return "Existence problems: global existence, local existence, non-existence";
	    case  2: return "Uniqueness problems: global uniqueness, local uniqueness, non-uniqueness";
	    case  8: return "Fundamental solutions";
	    case  9: return "Classical solutions";
	    case 10: return "Cauchy-Kovalevskaya theorems";
	    case 15: return "Variational methods";
	    case 16: return "Topological and monotonicity methods";
	    case 17: return "Parametrices";
	    case 18: return "Wave front sets";
	    case 20: return "Analytic methods, singularities";
	    case 21: return "Propagation of singularities";
	    case 22: return "Transform methods (e.g. integral transforms)";
	    case 23: return "Inequalities involving derivatives and differential and integral operators, inequalities for integrals";
	    case 24: return "Methods of ordinary differential equations";
	    case 25: return "Other special methods";
	    case 27: return "Microlocal methods; methods of sheaf theory and homological algebra in PDE";
	    case 30: return "Geometric theory, characteristics, transformations";
	    case 35: return "Theoretical approximation to solutions";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Qualitative properties of solutions
	  switch(min)
	    {
	    case  5: return "Oscillation, zeros of solutions, mean value theorems, etc.";
	    case  6: return "Symmetries, invariants, etc.";
	    case  7: return "Axially symmetric solutions";
	    case  8: return "Entire solutions";
	    case  9: return "Positive solutions";
	    case 10: return "Periodic solutions";
	    case 15: return "Almost and pseudo-almost periodic solutions";
	    case 20: return "Perturbations";
	    case 25: return "Singular perturbations";
	    case 27: return "Homogenization; equations in media with periodic structure";
	    case 30: return "Dependence of solutions on initial and boundary data, parameters";
	    case 32: return "Bifurcation";
	    case 33: return "Critical exponents";
	    case 34: return "Resonances";
	    case 35: return "Stability";
	    case 36: return "Pattern formation";
	    case 38: return "Critical points";
	    case 40: return "Asymptotic behavior of solutions";
	    case 41: return "Attractors";
	    case 42: return "Inertial manifolds";
	    case 44: return "Blow-up";
	    case 45: return "A priori estimates";
	    case 50: return "Maximum principles";
	    case 51: return "Comparison principles";
	    case 53: return "Liouville theorems, Phragmén-Lindelöf theorems";
	    case 60: return "Continuation and prolongation of solutions";
	    case 65: return "Smoothness and regularity of solutions";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Representations of solutions
	  switch(min)
	    {
	    case  5: return "Solutions in closed form";
	    case  6: return "Self-similar solutions";
	    case  7: return "Traveling wave solutions";
	    case  8: return "Soliton solutions";
	    case  9: return "Trigonometric solutions";
	    case 10: return "Series solutions";
	    case 11: return "Polynomial solutions";
	    case 15: return "Integral representations of solutions";
	    case 20: return "Asymptotic expansions";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Generalized solutions
	  switch(min)
	    {
	    case 30: return "Weak solutions";
	    case 35: return "Strong solutions";
	    case 40: return "Viscosity solutions";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Equations and systems with constant coefficients
	  switch(min)
	    {
	    case  5: return "Fundamental solutions";
	    case 10: return "Convexity properties";
	    case 15: return "Initial value problems";
	    case 20: return "General theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // General first-order equations and systems
	  switch(min)
	    {
	    case  5: return "Linear first-order equations";
	    case 10: return "Initial value problems for linear first-order equations";
	    case 15: return "Boundary value problems for linear first-order equations";
	    case 16: return "Initial-boundary value problems for linear first-order equations";
	    case 20: return "Nonlinear first-order equations";
	    case 21: return "Hamilton-Jacobi equations";
	    case 25: return "Initial value problems for nonlinear first-order equations";
	    case 30: return "Boundary value problems for nonlinear first-order equations";
	    case 31: return "Initial-boundary value problems for nonlinear first-order equations";
	    case 35: return "Linear first-order systems";
	    case 40: return "Initial value problems for linear first-order systems";
	    case 45: return "Boundary value problems for linear first-order systems";
	    case 46: return "Initial-boundary value problems for linear first-order systems";
	    case 50: return "Nonlinear first-order systems";
	    case 55: return "Initial value problems for nonlinear first-order systems";
	    case 60: return "Boundary value problems for nonlinear first-order systems";
	    case 61: return "Initial-boundary value problems for nonlinear first-order systems";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'G': // General higher-order equations and systems
	  switch(min)
	    {
	    case  5: return "Linear higher-order equations";
	    case 10: return "Initial value problems for linear higher-order equations";
	    case 15: return "Boundary value problems for linear higher-order equations";
	    case 16: return "Initial-boundary value problems for linear higher-order equations";
	    case 20: return "Nonlinear higher-order equations";
	    case 25: return "Initial value problems for nonlinear higher-order equations";
	    case 30: return "Boundary value problems for nonlinear higher-order equations";
	    case 31: return "Initial-boundary value problems for nonlinear higher-order equations";
	    case 35: return "Linear higher-order systems";
	    case 40: return "Initial value problems for linear higher-order systems";
	    case 45: return "Boundary value problems for linear higher-order systems";
	    case 46: return "Initial-boundary value problems for linear higher-order systems";
	    case 50: return "Nonlinear higher-order systems";
	    case 55: return "Initial value problems for nonlinear higher-order systems";
	    case 60: return "Boundary value problems for nonlinear higher-order systems";
	    case 61: return "Initial-boundary value problems for nonlinear higher-order systems";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'H': // Close-to-elliptic equations and systems
	  switch(min)
	    {
	    case 10: return "Hypoelliptic equations";
	    case 20: return "Subelliptic equations";
	    case 30: return "Quasi-elliptic equations";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'J': // Elliptic equations and systems
	  switch(min)
	    {
	    case  5: return "Laplacian operator, reduced wave equation (Helmholtz equation), Poisson equation";
	    case  8: return "Green's functions";
	    case 10: return "Schrödinger operator";
	    case 15: return "Second-order elliptic equations";
	    case 20: return "Variational methods for second-order elliptic equations";
	    case 25: return "Boundary value problems for second-order elliptic equations";
	    case 30: return "Higher-order elliptic equations";
	    case 35: return "Variational methods for higher-order elliptic equations";
	    case 40: return "Boundary value problems for higher-order elliptic equations";
	    case 46: return "First-order elliptic systems";
	    case 47: return "Second-order elliptic systems";
	    case 48: return "Higher-order elliptic systems";
	    case 50: return "Variational methods for elliptic systems";
	    case 56: return "Boundary value problems for first-order elliptic systems";
	    case 57: return "Boundary value problems for second-order elliptic systems";
	    case 58: return "Boundary value problems for higher-order elliptic systems";
	    case 60: return "Nonlinear elliptic equations";
	    case 61: return "Semilinear elliptic equations";
	    case 62: return "Quasilinear elliptic equations";
	    case 65: return "Nonlinear boundary value problems for linear elliptic equations";
	    case 66: return "Nonlinear boundary value problems for nonlinear elliptic equations";
	    case 67: return "Boundary values of solutions to elliptic equations";
	    case 70: return "Degenerate elliptic equations";
	    case 75: return "Singular elliptic equations";
	    case 86: return "Linear elliptic unilateral problems and linear elliptic variational inequalities";
	    case 87: return "Nonlinear elliptic unilateral problems and nonlinear elliptic variational inequalities";
	    case 88: return "Systems of elliptic variational inequalities";
	    case 91: return "Semilinear elliptic equations with Laplacian, bi-Laplacian or poly-Laplacian";
	    case 92: return "Quasilinear elliptic equations with p-Laplacian";
	    case 93: return "Quasilinear elliptic equations with mean curvature operator";
	    case 96: return "Elliptic Monge-Ampère equations";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'K': // Parabolic equations and systems
	  switch(min)
	    {
	    case  5: return "Heat equation";
	    case  8: return "Heat kernel";
	    case 10: return "Second-order parabolic equations";
	    case 15: return "Initial value problems for second-order parabolic equations";
	    case 20: return "Initial-boundary value problems for second-order parabolic equations";
	    case 25: return "Higher-order parabolic equations";
	    case 30: return "Initial value problems for higher-order parabolic equations";
	    case 35: return "Initial-boundary value problems for higher-order parabolic equations";
	    case 40: return "Second-order parabolic systems";
	    case 41: return "Higher-order parabolic systems";
	    case 45: return "Initial value problems for second-order parabolic systems";
	    case 46: return "Initial value problems for higher-order parabolic systems";
	    case 51: return "Initial-boundary value problems for second-order parabolic systems";
	    case 52: return "Initial-boundary value problems for higher-order parabolic systems";
	    case 55: return "Nonlinear parabolic equations";
	    case 57: return "Reaction-diffusion equations";
	    case 58: return "Semilinear parabolic equations";
	    case 59: return "Quasilinear parabolic equations";
	    case 60: return "Nonlinear initial value problems for linear parabolic equations";
	    case 61: return "Nonlinear initial-boundary value problems for nonlinear parabolic equations";
	    case 65: return "Degenerate parabolic equations";
	    case 67: return "Singular parabolic equations";
	    case 70: return "Ultraparabolic equations, pseudoparabolic equations, etc.";
	    case 85: return "Linear parabolic unilateral problems and linear parabolic variational inequalities";
	    case 86: return "Nonlinear parabolic unilateral problems and nonlinear parabolic variational inequalities";
	    case 87: return "Systems of parabolic variational inequalities";
	    case 90: return "Abstract parabolic equations";
	    case 91: return "Semilinear parabolic equations with Laplacian, bi-Laplacian or poly-Laplacian";
	    case 92: return "Quasilinear parabolic equations with p-Laplacian";
	    case 93: return "Quasilinear parabolic equations with mean curvature operator";
	    case 96: return "Parabolic Monge-Ampère equations";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'L': // Hyperbolic equations and systems
	  switch(min)
	    {
	    case  2: return "First-order hyperbolic equations";
	    case  3: return "Initial value problems for first-order hyperbolic equations";
	    case  4: return "Initial-boundary value problems for first-order hyperbolic equations";
	    case  5: return "Wave equation";
	    case 10: return "Second-order hyperbolic equations";
	    case 15: return "Initial value problems for second-order hyperbolic equations";
	    case 20: return "Initial-boundary value problems for second-order hyperbolic equations";
	    case 25: return "Higher-order hyperbolic equations";
	    case 30: return "Initial value problems for higher-order hyperbolic equations";
	    case 35: return "Initial-boundary value problems for higher-order hyperbolic equations";
	    case 40: return "First-order hyperbolic systems";
	    case 45: return "Initial value problems for first-order hyperbolic systems";
	    case 50: return "Initial-boundary value problems for first-order hyperbolic systems";
	    case 51: return "Second-order hyperbolic systems";
	    case 52: return "Initial value problems for second-order hyperbolic systems";
	    case 53: return "Initial-boundary value problems for second-order hyperbolic systems";
	    case 55: return "Higher-order hyperbolic systems";
	    case 56: return "Initial value problems for higher-order hyperbolic systems";
	    case 57: return "Initial-boundary value problems for higher-order hyperbolic systems";
	    case 60: return "Nonlinear first-order hyperbolic equations";
	    case 65: return "Conservation laws";
	    case 67: return "Shocks and singularities";
	    case 70: return "Nonlinear second-order hyperbolic equations";
	    case 71: return "Semilinear second-order hyperbolic equations";
	    case 72: return "Quasilinear second-order hyperbolic equations";
	    case 75: return "Nonlinear higher-order hyperbolic equations";
	    case 76: return "Semilinear higher-order hyperbolic equations";
	    case 77: return "Quasilinear higher-order hyperbolic equations";
	    case 80: return "Degenerate hyperbolic equations";
	    case 81: return "Singular hyperbolic equations";
	    case 82: return "Pseudohyperbolic equations";
	    case 85: return "Linear hyperbolic unilateral problems and linear hyperbolic variational inequalities";
	    case 86: return "Nonlinear hyperbolic unilateral problems and nonlinear hyperbolic variational inequalities";
	    case 87: return "Unilateral problems and variational inequalities for hyperbolic systems";
	    case 90: return "Abstract hyperbolic equations";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'M': // Equations and systems of special type (mixed, composite, etc.)
	  switch(min)
	    {
	    case 10: return "Equations of mixed type";
	    case 11: return "Initial value problems for equations of mixed type";
	    case 12: return "Boundary value problems for equations of mixed type";
	    case 13: return "Initial-boundary value problems for equations of mixed type";
	    case 30: return "Systems of mixed type";
	    case 31: return "Initial value problems for systems of mixed type";
	    case 32: return "Boundary value problems for systems of mixed type";
	    case 33: return "Initial-boundary value problems for systems of mixed type";
	    case 85: return "Linear unilateral problems and variational inequalities of mixed type";
	    case 86: return "Nonlinear unilateral problems and nonlinear variational inequalities of mixed type";
	    case 87: return "Systems of variational inequalities of mixed type";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'N': // Overdetermined systems
	  switch(min)
	    {
	    case  5: return "Overdetermined systems with constant coefficients";
	    case 10: return "Overdetermined systems with variable coefficients";
	    case 15: return "∂¯-Neumann problem and generalizations; formal complexes";
	    case 20: return "Overdetermined initial value problems";
	    case 25: return "Overdetermined boundary value problems";
	    case 30: return "Overdetermined initial-boundary value problems";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'P': // Spectral theory and eigenvalue problems
	  switch(min)
	    {
	    case  5: return "General topics in linear spectral theory";
	    case 10: return "Completeness of eigenfunctions, eigenfunction expansions";
	    case 15: return "Estimation of eigenvalues, upper and lower bounds";
	    case 20: return "Asymptotic distribution of eigenvalues and eigenfunctions";
	    case 25: return "Scattering theory";
	    case 30: return "Nonlinear eigenvalue problems, nonlinear spectral theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'Q': // Equations of mathematical physics and other areas of application
	  switch(min)
	    {
	    case  5: return "Euler-Poisson-Darboux equations";
	    case 15: return "Riemann-Hilbert problems";
	    case 20: return "Boltzmann equations";
	    case 30: return "Navier-Stokes equations";
	    case 31: return "Euler equations";
	    case 35: return "PDEs in connection with fluid mechanics";
	    case 40: return "PDEs in connection with quantum mechanics";
	    case 41: return "Time-dependent Schrödinger equations, Dirac equations";
	    case 51: return "Soliton-like equations";
	    case 53: return "KdV-like equations (Korteweg-de Vries)";
	    case 55: return "NLS-like equations (nonlinear Schrödinger)";
	    case 56: return "Ginzburg-Landau equations";
	    case 60: return "PDEs in connection with optics and electromagnetic theory";
	    case 61: return "Maxwell equations";
	    case 62: return "PDEs in connection with statistics";
	    case 68: return "PDEs in connection with computer science";
	    case 70: return "PDEs in connection with mechanics of particles and systems";
	    case 74: return "PDEs in connection with mechanics of deformable solids";
	    case 75: return "PDEs in connection with relativity and gravitational theory";
	    case 76: return "Einstein equations";
	    case 79: return "PDEs in connection with classical thermodynamics and heat transfer";
	    case 82: return "PDEs in connection with statistical mechanics";
	    case 83: return "Vlasov-like equations";
	    case 84: return "Fokker-Planck equations";
	    case 85: return "PDEs in connection with astronomy and astrophysics";
	    case 86: return "PDEs in connection with geophysics";
	    case 90: return "PDEs in connection with mathematical programming";
	    case 91: return "PDEs in connection with game theory, economics, social and behavioral sciences";
	    case 92: return "PDEs in connection with biology and other natural sciences";
	    case 93: return "PDEs in connection with control and optimization";
	    case 94: return "PDEs in connection with information and communication";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'R': // Miscellaneous topics
	  switch(min)
	    {
	    case  1: return "Partial differential equations on manifolds";
	    case  2: return "Partial differential equations on graphs and networks (ramified or polygonal spaces)";
	    case  3: return "Partial differential equations on Heisenberg groups, Lie groups, Carnot groups, etc.";
	    case  5: return "Partial differential equations with discontinuous coefficients or data";
	    case  6: return "Partial differential equations with measure";
	    case  9: return "Integro-partial differential equations";
	    case 10: return "Partial functional-differential equations";
	    case 11: return "Fractional partial differential equations";
	    case 12: return "Impulsive partial differential equations";
	    case 13: return "Fuzzy partial differential equations";
	    case 15: return "Partial differential equations on infinite-dimensional (e.g. function) spaces (= PDE in infinitely many variables)";
	    case 20: return "Partial operator-differential equations (i.e., PDE on finite-dimensional spaces for abstract space valued functions)";
	    case 25: return "Improperly posed problems";
	    case 30: return "Inverse problems";
	    case 35: return "Free boundary problems";
	    case 37: return "Moving boundary problems";
	    case 45: return "Partial differential inequalities";
	    case 50: return "Partial differential equations of infinite order";
	    case 60: return "Partial differential equations with randomness, stochastic partial differential equations";
	    case 70: return "Partial differential equations with multivalued right-hand sides";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'S': // Pseudodifferential operators and other generalizations of partial differential operators
	  switch(min)
	    {
	    case  5: return "Pseudodifferential operators";
	    case 10: return "Initial value problems for pseudodifferential operators";
	    case 11: return "Initial-boundary value problems for pseudodifferential operators";
	    case 15: return "Boundary value problems for pseudodifferential operators";
	    case 30: return "Fourier integral operators";
	    case 35: return "Topological aspects: intersection cohomology, stratified sets, etc.";
	    case 50: return "Paradifferential operators";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 37: // Dynamical systems and ergodic theory
      switch (med)
	{
	case 'A': // Ergodic theory
	  switch(min)
	    {
	    case  5: return "Measure-preserving transformations";
	    case 10: return "One-parameter continuous families of measure-preserving transformations";
	    case 15: return "General groups of measure-preserving transformations";
	    case 17: return "Homogeneous flows";
	    case 20: return "Orbit equivalence, cocycles, ergodic equivalence relations";
	    case 25: return "Ergodicity, mixing, rates of mixing";
	    case 30: return "Ergodic theorems, spectral theory, Markov operators";
	    case 35: return "Entropy and other invariants, isomorphism, classification";
	    case 40: return "Nonsingular (and infinite-measure preserving) transformations";
	    case 45: return "Relations with number theory and harmonic analysis";
	    case 50: return "Relations with probability theory and stochastic processes";
	    case 55: return "Relations with the theory of C*-algebras";
	    case 60: return "Dynamical systems in statistical mechanics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Topological dynamics
	  switch(min)
	    {
	    case  5: return "Transformations and group actions with special properties (minimality, distality, proximality, etc.)";
	    case 10: return "Symbolic dynamics";
	    case 15: return "Cellular automata";
	    case 20: return "Notions of recurrence";
	    case 25: return "Lyapunov functions and stability; attractors, repellers";
	    case 30: return "Index theory, Morse-Conley indices";
	    case 35: return "Gradient-like and recurrent behavior; isolated (locally maximal) invariant sets";
	    case 40: return "Topological entropy";
	    case 45: return "Continua theory in dynamics";
	    case 50: return "Multi-dimensional shifts of finite type, tiling dynamics";
	    case 55: return "Nonautonomous dynamical systems";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Smooth dynamical systems: general theory
	  switch(min)
	    {
	    case  5: return "Smooth mappings and diffeomorphisms";
	    case 10: return "Vector fields, flows, ordinary differential equations";
	    case 15: return "Topological and differentiable equivalence, conjugacy, invariants, moduli, classification";
	    case 20: return "Generic properties, structural stability";
	    case 25: return "Fixed points, periodic points, fixed-point index theory";
	    case 27: return "Periodic orbits of vector fields and flows";
	    case 29: return "Homoclinic and heteroclinic orbits";
	    case 30: return "Zeta functions, (Ruelle-Frobenius) transfer operators, and other functional analytic techniques in dynamical systems";
	    case 35: return "Orbit growth";
	    case 40: return "Smooth ergodic theory, invariant measures";
	    case 45: return "Dimension theory of dynamical systems";
	    case 50: return "Approximate trajectories (pseudotrajectories, shadowing, etc.)";
	    case 55: return "Periodic and quasiperiodic flows and diffeomorphisms";
	    case 60: return "Nonautonomous smooth dynamical systems";
	    case 65: return "Monotone flows";
	    case 70: return "Attractors and repellers, topological structure";
	    case 75: return "Stability theory";
	    case 80: return "Symmetries, equivariant dynamical systems";
	    case 85: return "Dynamics of group actions other than Z and R, and foliations";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Dynamical systems with hyperbolic behavior
	  switch(min)
	    {
	    case  5: return "Hyperbolic orbits and sets";
	    case 10: return "Invariant manifold theory";
	    case 15: return "Morse-Smale systems";
	    case 20: return "Uniformly hyperbolic systems (expanding, Anosov, Axiom A, etc.)";
	    case 25: return "Nonuniformly hyperbolic systems (Lyapunov exponents, Pesin theory, etc.)";
	    case 30: return "Partially hyperbolic systems and dominated splittings";
	    case 35: return "Thermodynamic formalism, variational principles, equilibrium states";
	    case 40: return "Dynamical systems of geometric origin and hyperbolicity (geodesic and horocycle flows, etc.)";
	    case 45: return "Strange attractors, chaotic dynamics";
	    case 50: return "Hyperbolic systems with singularities (billiards, etc.)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Low-dimensional dynamical systems
	  switch(min)
	    {
	    case  5: return "Maps of the interval (piecewise continuous, continuous, smooth)";
	    case 10: return "Maps of the circle";
	    case 15: return "Combinatorial dynamics (types of periodic orbits)";
	    case 20: return "Universality, renormalization";
	    case 25: return "Maps of trees and graphs";
	    case 30: return "Homeomorphisms and diffeomorphisms of planes and surfaces";
	    case 35: return "Flows on surfaces";
	    case 40: return "Twist maps";
	    case 45: return "Rotation numbers and vectors";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // Complex dynamical systems
	  switch(min)
	    {
	    case  5: return "Relations and correspondences";
	    case 10: return "Polynomials; rational maps; entire and meromorphic functions";
	    case 15: return "Expanding maps; hyperbolicity; structural stability";
	    case 20: return "Combinatorics and topology";
	    case 25: return "Renormalization";
	    case 30: return "Quasiconformal methods and Teichmüller theory; Fuchsian and Kleinian groups as dynamical systems";
	    case 35: return "Conformal densities and Hausdorff dimension";
	    case 40: return "Geometric limits";
	    case 45: return "Holomorphic families of dynamical systems; the Mandelbrot set; bifurcations";
	    case 50: return "Small divisors, rotation domains and linearization; Fatou and Julia sets";
	    case 75: return "Holomorphic foliations and vector fields";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'G': // Local and nonlocal bifurcation theory
	  switch(min)
	    {
	    case  5: return "Normal forms";
	    case 10: return "Bifurcations of singular points";
	    case 15: return "Bifurcations of limit cycles and periodic orbits";
	    case 20: return "Hyperbolic singular points with homoclinic trajectories";
	    case 25: return "Bifurcations connected with nontransversal intersection";
	    case 30: return "Infinite nonwandering sets arising in bifurcations";
	    case 35: return "Attractors and their bifurcations";
	    case 40: return "Symmetries, equivariant bifurcation theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'H': // Random dynamical systems
	  switch(min)
	    {
	    case  5: return "Foundations, general theory of cocycles, algebraic ergodic theory";
	    case 10: return "Generation, random and stochastic difference and differential equations";
	    case 15: return "Multiplicative ergodic theory, Lyapunov exponents";
	    case 20: return "Bifurcation theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'J': // Finite-dimensional Hamiltonian, Lagrangian, contact, and nonholonomic systems
	  switch(min)
	    {
	    case  5: return "General theory, relations with symplectic geometry and topology";
	    case 10: return "Symplectic mappings, fixed points";
	    case 15: return "Symmetries, invariants, invariant manifolds, momentum maps, reduction";
	    case 20: return "Bifurcation problems";
	    case 25: return "Stability problems";
	    case 30: return "Obstructions to integrability (nonintegrability criteria)";
	    case 35: return "Completely integrable systems, topological structure of phase space, integration methods";
	    case 40: return "Perturbations, normal forms, small divisors, KAM theory, Arnol'd diffusion";
	    case 45: return "Periodic, homoclinic and heteroclinic orbits; variational methods, degree-theoretic methods";
	    case 50: return "Action-minimizing orbits and measures";
	    case 55: return "Contact systems";
	    case 60: return "Nonholonomic dynamical systems";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'K': // Infinite-dimensional Hamiltonian systems
	  switch(min)
	    {
	    case  5: return "Hamiltonian structures, symmetries, variational principles, conservation laws";
	    case 10: return "Completely integrable systems, integrability tests, bi-Hamiltonian structures, hierarchies (KdV, KP, Toda, etc.)";
	    case 15: return "Integration of completely integrable systems by inverse spectral and scattering methods";
	    case 20: return "Relations with algebraic geometry, complex analysis, special functions";
	    case 25: return "Relations with differential geometry";
	    case 30: return "Relations with infinite-dimensional Lie algebras and other algebraic structures";
	    case 35: return "Lie-Bäcklund and other transformations";
	    case 40: return "Soliton theory, asymptotic behavior of solutions";
	    case 45: return "Stability problems";
	    case 50: return "Bifurcation problems";
	    case 55: return "Perturbations, KAM for infinite-dimensional systems";
	    case 60: return "Lattice dynamics";
	    case 65: return "Hamiltonian systems on groups of diffeomorphisms and on manifolds of mappings and metrics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'L': // Infinite-dimensional dissipative dynamical systems
	  switch(min)
	    {
	    case  5: return "General theory, nonlinear semigroups, evolution equations";
	    case 10: return "Normal forms, center manifold theory, bifurcation theory";
	    case 15: return "Stability problems";
	    case 20: return "Symmetries";
	    case 25: return "Inertial manifolds and other invariant attracting sets";
	    case 30: return "Attractors and their dimensions, Lyapunov exponents";
	    case 40: return "Invariant measures";
	    case 45: return "Hyperbolicity; Lyapunov functions";
	    case 50: return "Noncompact semigroups; dispersive equations; perturbations of Hamiltonian systems";
	    case 55: return "Infinite-dimensional random dynamical systems; stochastic equations";
	    case 60: return "Lattice dynamics";
	    case 65: return "Special approximation methods (nonlinear Galerkin, etc.)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'M': // Approximation methods and numerical treatment of dynamical systems
	  switch(min)
	    {
	    case  5: return "Simulation";
	    case 10: return "Time series analysis";
	    case 15: return "Symplectic integrators";
	    case 20: return "Computational methods for bifurcation problems";
	    case 25: return "Computational methods for ergodic theory (approximation of invariant measures, computation of Lyapunov exponents, entropy)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'N': // Applications
	  switch(min)
	    {
	    case  5: return "Dynamical systems in classical and celestial mechanics";
	    case 10: return "Dynamical systems in fluid mechanics, oceanography and meteorology";
	    case 15: return "Dynamical systems in solid mechanics";
	    case 20: return "Dynamical systems in other branches of physics (quantum mechanics, general relativity, laser physics)";
	    case 25: return "Dynamical systems in biology";
	    case 30: return "Dynamical systems in numerical analysis";
	    case 35: return "Dynamical systems in control";
	    case 40: return "Dynamical systems in optimization and economics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'P': // Arithmetic and non-Archimedean dynamical systems
	  switch(min)
	    {
	    case  5: return "Polynomial and rational maps";
	    case 10: return "Analytic and meromorphic maps";
	    case 15: return "Global ground fields";
	    case 20: return "Non-Archimedean local ground fields";
	    case 25: return "Finite ground fields";
	    case 30: return "Height functions; Green functions; invariant measures";
	    case 35: return "Arithmetic properties of periodic points";
	    case 40: return "Non-Archimedean Fatou and Julia sets";
	    case 45: return "Families and moduli spaces";
	    case 50: return "Dynamical systems on Berkovich spaces";
	    case 55: return "Arithmetic dynamics on general algebraic varieties";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 39: // Difference and functional equations
      switch (med)
	{
	case 'A': // Difference equations
	  switch(min)
	    {
	    case  5: return "General theory";
	    case  6: return "Linear equations";
	    case 10: return "Difference equations, additive";
	    case 12: return "Discrete version of topics in analysis";
	    case 13: return "Difference equations, scaling (q-differences)";
	    case 14: return "Partial difference equations";
	    case 20: return "Multiplicative and other generalized difference equations, e.g. of Lyness type";
	    case 21: return "Oscillation theory";
	    case 22: return "Growth, boundedness, comparison of solutions";
	    case 23: return "Periodic solutions";
	    case 24: return "Almost periodic solutions";
	    case 28: return "Bifurcation theory";
	    case 30: return "Stability theory";
	    case 33: return "Complex (chaotic) behavior of solutions";
	    case 45: return "Equations in the complex domain";
	    case 50: return "Stochastic difference equations";
	    case 60: return "Applications";
	    case 70: return "Difference operators";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Functional equations and inequalities
	  switch(min)
	    {
	    case  5: return "General";
	    case 12: return "Iteration theory, iterative and composite equations";
	    case 22: return "Equations for real functions";
	    case 32: return "Equations for complex functions";
	    case 42: return "Matrix and operator equations";
	    case 52: return "Equations for functions with more general domains and/or ranges";
	    case 55: return "Orthogonal additivity and other conditional equations";
	    case 62: return "Functional inequalities, including subadditivity, convexity, etc.";
	    case 72: return "Systems of functional equations and inequalities";
	    case 82: return "Stability, separation, extension, and related topics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 40: // Sequences, series, summability
      switch (med)
	{
	case 'A': // Convergence and divergence of infinite limiting processes
	  switch(min)
	    {
	    case  5: return "Convergence and divergence of series and sequences";
	    case 10: return "Convergence and divergence of integrals";
	    case 15: return "Convergence and divergence of continued fractions";
	    case 20: return "Convergence and divergence of infinite products";
	    case 25: return "Approximation to limiting values (summation of series, etc.)";
	    case 30: return "Convergence and divergence of series and sequences of functions";
	    case 35: return "Ideal and statistical convergence";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Multiple sequences and series
	  switch(min)
	    {
	    case  5: return "Multiple sequences and series";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // General summability methods
	  switch(min)
	    {
	    case  5: return "Matrix methods";
	    case 10: return "Integral methods";
	    case 15: return "Function-theoretic methods (including power series methods and semicontinuous methods)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Direct theorems on summability
	  switch(min)
	    {
	    case  5: return "General theorems";
	    case  9: return "Structure of summability fields";
	    case 10: return "Tauberian constants and oscillation limits";
	    case 15: return "Convergence factors and summability factors";
	    case 20: return "Summability and bounded fields of methods";
	    case 25: return "Inclusion and equivalence theorems";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Inversion theorems
	  switch(min)
	    {
	    case  5: return "Tauberian theorems, general";
	    case 10: return "Growth estimates";
	    case 15: return "Lacunary inversion theorems";
	    case 20: return "Tauberian constants";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // Absolute and strong summability
	  switch(min)
	    {
	    case  5: return "Absolute and strong summability";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'G': // Special methods of summability
	  switch(min)
	    {
	    case  5: return "Cesàro, Euler, Nörlund and Hausdorff methods";
	    case 10: return "Abel, Borel and power series methods";
	    case 15: return "Summability methods using statistical convergence";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'H': // Functional analytic methods in summability
	  switch(min)
	    {
	    case  5: return "Functional analytic methods in summability";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'J': // Summability in abstract structures
	  switch(min)
	    {
	    case  5: return "Summability in abstract structures";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 41: // Approximations and expansions
      switch (med)
	{
	case 'A': // Approximations and expansions
	  switch(min)
	    {
	    case  5: return "Interpolation";
	    case 10: return "Approximation by polynomials";
	    case 15: return "Spline approximation";
	    case 17: return "Inequalities in approximation (Bernstein, Jackson, Nikol'skiĭ-type inequalities)";
	    case 20: return "Approximation by rational functions";
	    case 21: return "Padé approximation";
	    case 25: return "Rate of convergence, degree of approximation";
	    case 27: return "Inverse theorems";
	    case 28: return "Simultaneous approximation";
	    case 29: return "Approximation with constraints";
	    case 30: return "Approximation by other special function classes";
	    case 35: return "Approximation by operators (in particular, by integral operators)";
	    case 36: return "Approximation by positive operators";
	    case 40: return "Saturation";
	    case 44: return "Best constants";
	    case 45: return "Approximation by arbitrary linear expressions";
	    case 46: return "Approximation by arbitrary nonlinear expressions; widths and entropy";
	    case 50: return "Best approximation, Chebyshev systems";
	    case 52: return "Uniqueness of best approximation";
	    case 55: return "Approximate quadratures";
	    case 58: return "Series expansions (e.g. Taylor, Lidstone series, but not Fourier series)";
	    case 60: return "Asymptotic approximations, asymptotic expansions (steepest descent, etc.)";
	    case 63: return "Multidimensional problems";
	    case 65: return "Abstract approximation theory (approximation in normed linear spaces and other abstract spaces)";
	    case 80: return "Remainders in approximation formulas";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 42: // Harmonic analysis on Euclidean spaces
      switch (med)
	{
	case 'A': // Harmonic analysis in one variable
	  switch(min)
	    {
	    case  5: return "Trigonometric polynomials, inequalities, extremal problems";
	    case 10: return "Trigonometric approximation";
	    case 15: return "Trigonometric interpolation";
	    case 16: return "Fourier coefficients, Fourier series of functions with special properties, special Fourier series";
	    case 20: return "Convergence and absolute convergence of Fourier and trigonometric series";
	    case 24: return "Summability and absolute summability of Fourier and trigonometric series";
	    case 32: return "Trigonometric series of special types (positive coefficients, monotonic coefficients, etc.)";
	    case 38: return "Fourier and Fourier-Stieltjes transforms and other transforms of Fourier type";
	    case 45: return "Multipliers";
	    case 50: return "Conjugate functions, conjugate series, singular integrals";
	    case 55: return "Lacunary series of trigonometric and other functions; Riesz products";
	    case 61: return "Probabilistic methods";
	    case 63: return "Uniqueness of trigonometric expansions, uniqueness of Fourier expansions, Riemann theory, localization";
	    case 65: return "Completeness of sets of functions";
	    case 70: return "Trigonometric moment problems";
	    case 75: return "Classical almost periodic functions, mean periodic functions";
	    case 82: return "Positive definite functions";
	    case 85: return "Convolution, factorization";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Harmonic analysis in several variables
	  switch(min)
	    {
	    case  5: return "Fourier series and coefficients";
	    case  8: return "Summability";
	    case 10: return "Fourier and Fourier-Stieltjes transforms and other transforms of Fourier type";
	    case 15: return "Multipliers";
	    case 20: return "Singular and oscillatory integrals (Calderón-Zygmund, etc.)";
	    case 25: return "Maximal functions, Littlewood-Paley theory";
	    case 30: return "H^p-spaces";
	    case 35: return "Function spaces arising in harmonic analysis";
	    case 37: return "Harmonic analysis and PDE";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Nontrigonometric harmonic analysis
	  switch(min)
	    {
	    case  5: return "Orthogonal functions and polynomials, general theory";
	    case 10: return "Fourier series in special orthogonal functions (Legendre polynomials, Walsh functions, etc.)";
	    case 15: return "General harmonic expansions, frames";
	    case 20: return "Other transformations of harmonic type";
	    case 25: return "Uniqueness and localization for orthogonal series";
	    case 30: return "Completeness of sets of functions";
	    case 40: return "Wavelets and other special systems";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 43: // Abstract harmonic analysis
      switch (med)
	{
	case 'A': // Abstract harmonic analysis
	  switch(min)
	    {
	    case  5: return "Measures on groups and semigroups, etc.";
	    case  7: return "Means on groups, semigroups, etc.; amenable groups";
	    case 10: return "Measure algebras on groups, semigroups, etc.";
	    case 15: return "L^p-spaces and other function spaces on groups, semigroups, etc.";
	    case 17: return "Analysis on ordered groups, H^p-theory";
	    case 20: return "L¹-algebras on groups, semigroups, etc.";
	    case 22: return "Homomorphisms and multipliers of function spaces on groups, semigroups, etc.";
	    case 25: return "Fourier and Fourier-Stieltjes transforms on locally compact and other abelian groups";
	    case 30: return "Fourier and Fourier-Stieltjes transforms on nonabelian groups and on semigroups, etc.";
	    case 32: return "Other transforms and operators of Fourier type";
	    case 35: return "Positive definite functions on groups, semigroups, etc.";
	    case 40: return "Character groups and dual objects";
	    case 45: return "Spectral synthesis on groups, semigroups, etc.";
	    case 46: return "Special sets (thin sets, Kronecker sets, Helson sets, Ditkin sets, Sidon sets, etc.)";
	    case 50: return "Convergence of Fourier series and of inverse transforms";
	    case 55: return "Summability methods on groups, semigroups, etc.";
	    case 60: return "Almost periodic functions on groups and semigroups and their generalizations (recurrent functions, distal functions, etc.); almost automorphic functions";
	    case 62: return "Hypergroups";
	    case 65: return "Representations of groups, semigroups, etc.";
	    case 70: return "Analysis on specific locally compact and other abelian groups";
	    case 75: return "Analysis on specific compact groups";
	    case 77: return "Analysis on general compact groups";
	    case 80: return "Analysis on other specific Lie groups";
	    case 85: return "Analysis on homogeneous spaces";
	    case 90: return "Spherical functions";
	    case 95: return "Categorical methods";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 44: // Integral transforms, operational calculus
      switch (med)
	{
	case 'A': // Integral transforms, operational calculus
	  switch(min)
	    {
	    case  5: return "General transforms";
	    case 10: return "Laplace transform";
	    case 12: return "Radon transform";
	    case 15: return "Special transforms (Legendre, Hilbert, etc.)";
	    case 20: return "Transforms of special functions";
	    case 30: return "Multiple transforms";
	    case 35: return "Convolution";
	    case 40: return "Calculus of Mikusiński and other operational calculi";
	    case 45: return "Classical operational calculus";
	    case 55: return "Discrete operational calculus";
	    case 60: return "Moment problems";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 45: // Integral equations
      switch (med)
	{
	case 'A': // Linear integral equations
	  switch(min)
	    {
	    case  5: return "Linear integral equations";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Fredholm integral equations
	  switch(min)
	    {
	    case  5: return "Fredholm integral equations";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Eigenvalue problems
	  switch(min)
	    {
	    case  5: return "Eigenvalue problems";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Volterra integral equations
	  switch(min)
	    {
	    case  5: return "Volterra integral equations";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Singular integral equations
	  switch(min)
	    {
	    case  5: return "Integral equations with kernels of Cauchy type";
	    case 10: return "Integral equations of the convolution type (Abel, Picard, Toeplitz and Wiener-Hopf type)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // Systems of linear integral equations
	  switch(min)
	    {
	    case  5: return "Systems of nonsingular linear integral equations";
	    case 10: return "Dual, triple, etc., integral and series equations";
	    case 15: return "Systems of singular linear integral equations";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'G': // Nonlinear integral equations
	  switch(min)
	    {
	    case  5: return "Singular nonlinear integral equations";
	    case 10: return "Other nonlinear integral equations";
	    case 15: return "Systems of nonlinear integral equations";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'H': // Miscellaneous special kernels
	  switch(min)
	    {
	    case  5: return "Miscellaneous special kernels";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'J': // Integro-ordinary differential equations
	  switch(min)
	    {
	    case  5: return "Integro-ordinary differential equations";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'K': // Integro-partial differential equations
	  switch(min)
	    {
	    case  5: return "Integro-partial differential equations";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'L': // Theoretical approximation of solutions
	  switch(min)
	    {
	    case  5: return "Theoretical approximation of solutions";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'M': // Qualitative behavior
	  switch(min)
	    {
	    case  5: return "Asymptotics";
	    case 10: return "Stability theory";
	    case 15: return "Periodic solutions";
	    case 20: return "Positive solutions";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'N': // Abstract integral equations, integral equations in abstract spaces
	  switch(min)
	    {
	    case  5: return "Abstract integral equations, integral equations in abstract spaces";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'P': // Integral operators
	  switch(min)
	    {
	    case  5: return "Integral operators";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'Q': // Inverse problems
	  switch(min)
	    {
	    case  5: return "Inverse problems";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'R': // Random integral equations
	  switch(min)
	    {
	    case  5: return "Random integral equations";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 46: // Functional analysis
      switch (med)
	{
	case 'A': // Topological linear spaces and related structures
	  switch(min)
	    {
	    case  3: return "General theory of locally convex spaces";
	    case  4: return "Locally convex Fréchet spaces and (DF)-spaces";
	    case  8: return "Barrelled spaces, bornological spaces";
	    case 11: return "Spaces determined by compactness or summability properties (nuclear spaces, Schwartz spaces, Montel spaces, etc.)";
	    case 13: return "Spaces defined by inductive or projective limits (LB, LF, etc.)";
	    case 16: return "Not locally convex spaces (metrizable topological linear spaces, locally bounded spaces, quasi-Banach spaces, etc.)";
	    case 17: return "Bornologies and related structures; Mackey convergence, etc.";
	    case 19: return "Other “topological” linear spaces (convergence spaces, ranked spaces, spaces with a metric taking values in an ordered structure more general than R, etc.)";
	    case 20: return "Duality theory";
	    case 22: return "Theorems of Hahn-Banach type; extension and lifting of functionals and operators";
	    case 25: return "Reflexivity and semi-reflexivity";
	    case 30: return "Open mapping and closed graph theorems; completeness (including B-, Br-completeness)";
	    case 32: return "Spaces of linear operators; topological tensor products; approximation properties";
	    case 35: return "Summability and bases";
	    case 40: return "Ordered topological linear spaces, vector lattices";
	    case 45: return "Sequence spaces (including Köthe sequence spaces)";
	    case 50: return "Compactness in topological linear spaces; angelic spaces, etc.";
	    case 55: return "Convex sets in topological linear spaces; Choquet theory";
	    case 61: return "Graded Fréchet spaces and tame operators";
	    case 63: return "Topological invariants ((DN), (Ω), etc.)";
	    case 70: return "Saks spaces and their duals (strict topologies, mixed topologies, two-norm spaces, co-Saks spaces, etc.)";
	    case 80: return "Modular spaces";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Normed linear spaces and Banach spaces; Banach lattices
	  switch(min)
	    {
	    case  3: return "Isomorphic theory (including renorming) of Banach spaces";
	    case  4: return "Isometric theory of Banach spaces";
	    case  6: return "Asymptotic theory of Banach spaces";
	    case  7: return "Local theory of Banach spaces";
	    case  8: return "Ultraproduct techniques in Banach space theory";
	    case  9: return "Probabilistic methods in Banach space theory";
	    case 10: return "Duality and reflexivity";
	    case 15: return "Summability and bases";
	    case 20: return "Geometry and structure of normed linear spaces";
	    case 22: return "Radon-Nikodým, Kreĭn-Milman and related properties";
	    case 25: return "Classical Banach spaces in the general theory";
	    case 26: return "Nonseparable Banach spaces";
	    case 28: return "Spaces of operators; tensor products; approximation properties";
	    case 40: return "Ordered normed spaces";
	    case 42: return "Banach lattices";
	    case 45: return "Banach sequence spaces";
	    case 50: return "Compactness in Banach (or normed) spaces";
	    case 70: return "Interpolation between normed linear spaces";
	    case 80: return "Nonlinear classification of Banach spaces; nonlinear quotients";
	    case 85: return "Embeddings of discrete metric spaces into Banach spaces; applications in topology and computer science";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Inner product spaces and their generalizations, Hilbert spaces
	  switch(min)
	    {
	    case  5: return "Hilbert and pre-Hilbert spaces: geometry and topology (including spaces with semidefinite inner product)";
	    case  7: return "Hilbert subspaces (= operator ranges); complementation (Aronszajn, de Branges, etc.)";
	    case 15: return "Characterizations of Hilbert spaces";
	    case 20: return "Spaces with indefinite inner product (Kreĭn spaces, Pontryagin spaces, etc.)";
	    case 50: return "Generalizations of inner products (semi-inner products, partial inner products, etc.)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Linear function spaces and their duals
	  switch(min)
	    {
	    case  5: return "Lattices of continuous, differentiable or analytic functions";
	    case 10: return "Topological linear spaces of continuous, differentiable or analytic functions";
	    case 15: return "Banach spaces of continuous, differentiable or analytic functions";
	    case 20: return "Hilbert spaces of continuous, differentiable or analytic functions";
	    case 22: return "Hilbert spaces with reproducing kernels (=";
	    case 25: return "Rings and algebras of continuous, differentiable or analytic functions";
	    case 27: return "Spaces of measures";
	    case 30: return "Spaces of measurable functions (L^p-spaces, Orlicz spaces, Köthe function spaces, Lorentz spaces, rearrangement invariant spaces, ideal spaces, etc.)";
	    case 35: return "Sobolev spaces and other spaces of “smooth” functions, embedding theorems, trace theorems";
	    case 39: return "Sobolev (and similar kinds of) spaces of functions of discrete variables";
	    case 40: return "Spaces of vector- and operator-valued functions";
	    case 50: return "Spaces of differentiable or holomorphic functions on infinite-dimensional spaces";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // Distributions, generalized functions, distribution spaces
	  switch(min)
	    {
	    case  5: return "Topological linear spaces of test functions, distributions and ultradistributions";
	    case 10: return "Operations with distributions";
	    case 12: return "Integral transforms in distribution spaces";
	    case 15: return "Hyperfunctions, analytic functionals";
	    case 20: return "Distributions and ultradistributions as boundary values of analytic functions";
	    case 25: return "Distributions on infinite-dimensional spaces";
	    case 30: return "Generalized functions for nonlinear analysis (Rosinger, Colombeau, nonstandard, etc.)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'G': // Measures, integration, derivative, holomorphy (all involving infinite-dimensional spaces)
	  switch(min)
	    {
	    case  5: return "Derivatives";
	    case 10: return "Vector-valued measures and integration";
	    case 12: return "Measures and integration on abstract linear spaces";
	    case 15: return "Functional analytic lifting theory";
	    case 20: return "Infinite-dimensional holomorphy";
	    case 25: return "(Spaces of) multilinear mappings, polynomials";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'H': // Topological algebras, normed rings and algebras, Banach algebras
	  switch(min)
	    {
	    case  5: return "General theory of topological algebras";
	    case 10: return "Ideals and subalgebras";
	    case 15: return "Representations of topological algebras";
	    case 20: return "Structure, classification of topological algebras";
	    case 25: return "Normed modules and Banach modules, topological modules (if not placed in 13-XX or 16-XX)";
	    case 30: return "Functional calculus in topological algebras";
	    case 35: return "Topological algebras of operators";
	    case 40: return "Automatic continuity";
	    case 70: return "Nonassociative topological algebras";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'J': // Commutative Banach algebras and commutative topological algebras
	  switch(min)
	    {
	    case  5: return "General theory of commutative topological algebras";
	    case 10: return "Banach algebras of continuous functions, function algebras";
	    case 15: return "Banach algebras of differentiable or analytic functions, H^p-spaces";
	    case 20: return "Ideals, maximal ideals, boundaries";
	    case 25: return "Representations of commutative topological algebras";
	    case 30: return "Subalgebras";
	    case 40: return "Structure, classification of commutative topological algebras";
	    case 45: return "Radical Banach algebras";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'K': // Topological (rings and) algebras with an involution
	  switch(min)
	    {
	    case  5: return "General theory of topological algebras with involution";
	    case 10: return "Representations of topological algebras with involution";
	    case 15: return "Hilbert algebras";
	    case 50: return "Nonselfadjoint (sub)algebras in algebras with involution";
	    case 70: return "Nonassociative topological algebras with an involution";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'L': // Selfadjoint operator algebras (C*-algebras, von Neumann (W*-) algebras, etc.)
	  switch(min)
	    {
	    case  5: return "General theory of C*-algebras";
	    case  6: return "Tensor products of C*-algebras";
	    case  7: return "Operator spaces and completely bounded maps";
	    case  8: return "C*-modules";
	    case  9: return "Free products of C*-algebras";
	    case 10: return "General theory of von Neumann algebras";
	    case 30: return "States";
	    case 35: return "Classifications of C*-algebras";
	    case 36: return "Classification of factors";
	    case 37: return "Subfactors and their classification";
	    case 40: return "Automorphisms";
	    case 45: return "Decomposition theory for C*-algebras";
	    case 51: return "Noncommutative measure and integration";
	    case 52: return "Noncommutative function spaces";
	    case 53: return "Noncommutative probability and statistics";
	    case 54: return "Free probability and free operator algebras";
	    case 55: return "Noncommutative dynamical systems";
	    case 57: return "Derivations, dissipations and positive semigroups in C*-algebras";
	    case 60: return "Applications of selfadjoint operator algebras to physics";
	    case 65: return "Quantizations, deformations";
	    case 70: return "Nonassociative selfadjoint operator algebras";
	    case 80: return "K-theory and operator algebras (including cyclic theory)";
	    case 85: return "Noncommutative topology";
	    case 87: return "Noncommutative differential geometry";
	    case 89: return "Other “noncommutative” mathematics based on C*-algebra theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'M': // Methods of category theory in functional analysis
	  switch(min)
	    {
	    case  5: return "Tensor products";
	    case  7: return "Ultraproducts";
	    case 10: return "Projective and injective objects";
	    case 15: return "Categories, functors";
	    case 18: return "Homological methods (exact sequences, right inverses, lifting, etc.)";
	    case 20: return "Methods of algebraic topology (cohomology, sheaf and bundle theory, etc.)";
	    case 35: return "Abstract interpolation of topological vector spaces";
	    case 40: return "Inductive and projective limits";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'N': // Miscellaneous applications of functional analysis
	  switch(min)
	    {
	    case 10: return "Applications in optimization, convex analysis, mathematical programming, economics";
	    case 20: return "Applications to differential and integral equations";
	    case 30: return "Applications in probability theory and statistics";
	    case 40: return "Applications in numerical analysis";
	    case 50: return "Applications in quantum physics";
	    case 55: return "Applications in statistical physics";
	    case 60: return "Applications in biology and other sciences";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'S': // Other (nonclassical) types of functional analysis
	  switch(min)
	    {
	    case 10: return "Functional analysis over fields other than R  or C  or the quaternions; non-Archimedean functional analysis";
	    case 20: return "Nonstandard functional analysis";
	    case 30: return "Constructive functional analysis";
	    case 40: return "Fuzzy functional analysis";
	    case 50: return "Functional analysis in probabilistic metric linear spaces";
	    case 60: return "Functional analysis on superspaces (supermanifolds) or graded spaces";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'T': // Nonlinear functional analysis
	  switch(min)
	    {
	    case  5: return "Infinite-dimensional manifolds";
	    case 10: return "Manifolds of mappings";
	    case 12: return "Measure (Gaussian, cylindrical, etc.) and integrals (Feynman, path, Fresnel, etc.) on manifolds";
	    case 20: return "Continuous and differentiable maps";
	    case 25: return "Holomorphic maps";
	    case 30: return "Distributions and generalized functions on nonlinear spaces";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 47: // Operator theory
      switch (med)
	{
	case 'A': // General theory of linear operators
	  switch(min)
	    {
	    case  5: return "General (adjoints, conjugates, products, inverses, domains, ranges, etc.)";
	    case  6: return "Linear relations (multivalued linear operators)";
	    case  7: return "Forms (bilinear, sesquilinear, multilinear)";
	    case 10: return "Spectrum, resolvent";
	    case 11: return "Local spectral properties";
	    case 12: return "Numerical range, numerical radius";
	    case 13: return "Several-variable operator theory (spectral, Fredholm, etc.)";
	    case 15: return "Invariant subspaces";
	    case 16: return "Cyclic vectors, hypercyclic and chaotic operators";
	    case 20: return "Dilations, extensions, compressions";
	    case 25: return "Spectral sets";
	    case 30: return "Norms (inequalities, more than one norm, etc.)";
	    case 35: return "Ergodic theory";
	    case 40: return "Scattering theory";
	    case 45: return "Canonical models for contractions and nonselfadjoint operators";
	    case 46: return "Chains (nests) of projections or of invariant subspaces, integrals along chains, etc.";
	    case 48: return "Operator colligations (= nodes), vessels, linear systems, characteristic functions, realizations, etc.";
	    case 50: return "Equations and inequalities involving linear operators, with vector unknowns";
	    case 52: return "Ill-posed problems, regularization";
	    case 53: return "(Semi-) Fredholm operators; index theories";
	    case 55: return "Perturbation theory";
	    case 56: return "Functions whose values are linear operators (operator and matrix valued functions, etc., including analytic and meromorphic ones)";
	    case 57: return "Operator methods in interpolation, moment and extension problems";
	    case 58: return "Operator approximation theory";
	    case 60: return "Functional calculus";
	    case 62: return "Equations involving linear operators, with operator unknowns";
	    case 63: return "Operator inequalities";
	    case 64: return "Operator means, shorted operators, etc.";
	    case 65: return "Structure theory";
	    case 66: return "Quasitriangular and nonquasitriangular, quasidiagonal and nonquasidiagonal operators";
	    case 67: return "Representation theory";
	    case 68: return "Factorization theory (including Wiener-Hopf and spectral factorizations)";
	    case 70: return "(Generalized) eigenfunction expansions; rigged Hilbert spaces";
	    case 75: return "Eigenvalue problems";
	    case 80: return "Tensor products of operators";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Special classes of linear operators
	  switch(min)
	    {
	    case  6: return "Riesz operators; eigenvalue distributions; approximation numbers, s-numbers, Kolmogorov numbers, entropy numbers, etc. of operators";
	    case  7: return "Operators defined by compactness properties";
	    case 10: return "Operators belonging to operator ideals (nuclear, p-summing, in the Schatten-von Neumann classes, etc.)";
	    case 15: return "Hermitian and normal operators (spectral measures, functional calculus, etc.)";
	    case 20: return "Subnormal operators, hyponormal operators, etc.";
	    case 25: return "Symmetric and selfadjoint operators (unbounded)";
	    case 32: return "Operators in reproducing-kernel Hilbert spaces (including de Branges, de Branges-Rovnyak, and other structured spaces)";
	    case 33: return "Composition operators";
	    case 34: return "Kernel operators";
	    case 35: return "Toeplitz operators, Hankel operators, Wiener-Hopf operators";
	    case 36: return "Jacobi (tridiagonal) operators (matrices) and generalizations";
	    case 37: return "Operators on special spaces (weighted shifts, operators on sequence spaces, etc.)";
	    case 38: return "Operators on function spaces (general)";
	    case 39: return "Difference operators";
	    case 40: return "Spectral operators, decomposable operators, well-bounded operators, etc.";
	    case 44: return "Accretive operators, dissipative operators, etc.";
	    case 47: return "Commutators, derivations, elementary operators, etc.";
	    case 48: return "Operators on Banach algebras";
	    case 49: return "Transformers, preservers (operators on spaces of operators)";
	    case 50: return "Operators on spaces with an indefinite metric";
	    case 60: return "Operators on ordered spaces";
	    case 65: return "Positive operators and order-bounded operators";
	    case 80: return "Random operators";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Individual linear operators as elements of algebraic systems
	  switch(min)
	    {
	    case  5: return "Operators in algebras";
	    case 10: return "Operators in *-algebras";
	    case 15: return "Operators in C*- or von Neumann algebras";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Groups and semigroups of linear operators, their generalizations and applications
	  switch(min)
	    {
	    case  3: return "Groups and semigroups of linear operators";
	    case  6: return "One-parameter semigroups and linear evolution equations";
	    case  7: return "Markov semigroups and applications to diffusion processes";
	    case  8: return "Schrödinger and Feynman-Kac semigroups";
	    case  9: return "Operator sine and cosine functions and higher-order Cauchy problems";
	    case 60: return "C-semigroups, regularized semigroups";
	    case 62: return "Integrated semigroups";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Ordinary differential operators
	  switch(min)
	    {
	    case  5: return "Ordinary differential operators";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // Partial differential operators
	  switch(min)
	    {
	    case  5: return "Partial differential operators";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'G': // Integral, integro-differential, and pseudodifferential operators
	  switch(min)
	    {
	    case 10: return "Integral operators";
	    case 20: return "Integro-differential operators";
	    case 30: return "Pseudodifferential operators";
	    case 40: return "Potential operators";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'H': // Nonlinear operators and their properties
	  switch(min)
	    {
	    case  4: return "Set-valued operators";
	    case  5: return "Monotone operators and generalizations";
	    case  6: return "Accretive operators, dissipative operators, etc.";
	    case  7: return "Monotone and positive operators on ordered Banach spaces or other ordered topological vector spaces";
	    case  8: return "Measures of noncompactness and condensing mappings, K-set contractions, etc.";
	    case  9: return "Contraction-type mappings, nonexpansive mappings, A-proper mappings, etc.";
	    case 10: return "Fixed-point theorems";
	    case 11: return "Degree theory";
	    case 14: return "Perturbations of nonlinear operators";
	    case 20: return "Semigroups of nonlinear operators";
	    case 25: return "Nonlinear ergodic theorems";
	    case 30: return "Particular nonlinear operators (superposition, Hammerstein, Nemytskiĭ, Uryson, etc.)";
	    case 40: return "Random operators";
	    case 60: return "Multilinear and polynomial operators";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'J': // Equations and inequalities involving nonlinear operators
	  switch(min)
	    {
	    case  5: return "Equations involving nonlinear operators (general)";
	    case  6: return "Nonlinear ill-posed problems";
	    case  7: return "Abstract inverse mapping and implicit function theorems";
	    case 10: return "Nonlinear spectral theory, nonlinear eigenvalue problems";
	    case 15: return "Abstract bifurcation theory";
	    case 20: return "Variational and other types of inequalities involving nonlinear operators (general)";
	    case 22: return "Variational and other types of inclusions";
	    case 25: return "Iterative procedures";
	    case 30: return "Variational methods";
	    case 35: return "Nonlinear evolution equations";
	    case 40: return "Equations with hysteresis operators";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'L': // Linear spaces and algebras of operators
	  switch(min)
	    {
	    case  5: return "Linear spaces of operators";
	    case  7: return "Convex sets and cones of operators";
	    case 10: return "Algebras of operators on Banach spaces and other topological linear spaces";
	    case 15: return "Operator algebras with symbol structure";
	    case 20: return "Operator ideals";
	    case 22: return "Ideals of polynomials and of multilinear mappings";
	    case 25: return "Operator spaces (= matricially normed spaces)";
	    case 30: return "Abstract operator algebras on Hilbert spaces";
	    case 35: return "Nest algebras, CSL algebras";
	    case 40: return "Limit algebras, subalgebras of C*-algebras";
	    case 45: return "Dual algebras; weakly closed singly generated operator algebras";
	    case 50: return "Dual spaces of operator algebras";
	    case 55: return "Representations of (nonselfadjoint) operator algebras";
	    case 60: return "Algebras of unbounded operators; partial algebras of operators";
	    case 65: return "Crossed product algebras (analytic crossed products)";
	    case 70: return "Nonassociative nonselfadjoint operator algebras";
	    case 75: return "Other nonselfadjoint operator algebras";
	    case 80: return "Algebras of specific types of operators (Toeplitz, integral, pseudodifferential, etc.)";
	    case 90: return "Applications of operator algebras to physics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'N': // Miscellaneous applications of operator theory
	  switch(min)
	    {
	    case 10: return "Applications in optimization, convex analysis, mathematical programming, economics";
	    case 20: return "Applications to differential and integral equations";
	    case 30: return "Applications in probability theory and statistics";
	    case 40: return "Applications in numerical analysis";
	    case 50: return "Applications in the physical sciences";
	    case 60: return "Applications in chemistry and life sciences";
	    case 70: return "Applications in systems theory, circuits, and control theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'S': // Other (nonclassical) types of operator theory
	  switch(min)
	    {
	    case 10: return "Operator theory over fields other than R, C or the quaternions; non-Archimedean operator theory";
	    case 20: return "Nonstandard operator theory";
	    case 30: return "Constructive operator theory";
	    case 40: return "Fuzzy operator theory";
	    case 50: return "Operator theory in probabilistic metric linear spaces";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 49: // Calculus of variations and optimal control; optimization
      switch (med)
	{
	case 'J': // Existence theories
	  switch(min)
	    {
	    case  5: return "Free problems in one independent variable";
	    case 10: return "Free problems in two or more independent variables";
	    case 15: return "Optimal control problems involving ordinary differential equations";
	    case 20: return "Optimal control problems involving partial differential equations";
	    case 21: return "Optimal control problems involving relations other than differential equations";
	    case 27: return "Problems in abstract spaces";
	    case 30: return "Optimal solutions belonging to restricted classes (Lipschitz controls, bang-bang controls, etc.)";
	    case 35: return "Minimax problems";
	    case 40: return "Variational methods including variational inequalities";
	    case 45: return "Methods involving semicontinuity and convergence; relaxation";
	    case 50: return "Fréchet and Gateaux differentiability";
	    case 52: return "Nonsmooth analysis";
	    case 53: return "Set-valued and variational analysis";
	    case 55: return "Problems involving randomness";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'K': // Optimality conditions
	  switch(min)
	    {
	    case  5: return "Free problems in one independent variable";
	    case 10: return "Free problems in two or more independent variables";
	    case 15: return "Problems involving ordinary differential equations";
	    case 20: return "Problems involving partial differential equations";
	    case 21: return "Problems involving relations other than differential equations";
	    case 27: return "Problems in abstract spaces";
	    case 30: return "Optimal solutions belonging to restricted classes";
	    case 35: return "Minimax problems";
	    case 40: return "Sensitivity, stability, well-posedness";
	    case 45: return "Problems involving randomness";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'L': // Hamilton-Jacobi theories, including dynamic programming
	  switch(min)
	    {
	    case 20: return "Dynamic programming method";
	    case 25: return "Viscosity solutions";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'M': // Numerical methods
	  switch(min)
	    {
	    case  5: return "Methods based on necessary conditions";
	    case 15: return "Newton-type methods";
	    case 20: return "Methods of relaxation type";
	    case 25: return "Discrete approximations";
	    case 27: return "Decomposition methods";
	    case 29: return "Methods involving duality";
	    case 30: return "Other methods";
	    case 37: return "Methods of nonlinear programming type";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'N': // Miscellaneous topics
	  switch(min)
	    {
	    case  5: return "Linear optimal control problems";
	    case 10: return "Linear-quadratic problems";
	    case 15: return "Duality theory";
	    case 20: return "Periodic optimization";
	    case 25: return "Impulsive optimal control problems";
	    case 30: return "Problems with incomplete information";
	    case 35: return "Optimal feedback synthesis";
	    case 45: return "Inverse problems";
	    case 60: return "Regularity of solutions";
	    case 70: return "Differential games";
	    case 75: return "Pursuit and evasion games";
	    case 90: return "Applications of optimal control and differential games";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'Q': // Manifolds
	  switch(min)
	    {
	    case  5: return "Minimal surfaces";
	    case 10: return "Optimization of shapes other than minimal surfaces";
	    case 12: return "Sensitivity analysis";
	    case 15: return "Geometric measure and integration theory, integral and normal currents";
	    case 20: return "Variational problems in a geometric measure-theoretic setting";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'R': // Variational methods for eigenvalues of operators
	  switch(min)
	    {
	    case  5: return "Variational methods for eigenvalues of operators";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'S': // Variational principles of physics
	  switch(min)
	    {
	    case  5: return "Variational principles of physics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 51: // Geometry
      switch (med)
	{
	case 'A': // Linear incidence geometry
	  switch(min)
	    {
	    case  5: return "General theory and projective geometries";
	    case 10: return "Homomorphism, automorphism and dualities";
	    case 15: return "Structures with parallelism";
	    case 20: return "Configuration theorems";
	    case 25: return "Algebraization";
	    case 30: return "Desarguesian and Pappian geometries";
	    case 35: return "Non-Desarguesian affine and projective planes";
	    case 40: return "Translation planes and spreads";
	    case 45: return "Incidence structures imbeddable into projective geometries";
	    case 50: return "Polar geometry, symplectic spaces, orthogonal spaces";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Nonlinear incidence geometry
	  switch(min)
	    {
	    case  5: return "General theory";
	    case 10: return "Möbius geometries";
	    case 15: return "Laguerre geometries";
	    case 20: return "Minkowski geometries";
	    case 25: return "Lie geometries";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Ring geometry (Hjelmslev, Barbilian, etc.)
	  switch(min)
	    {
	    case  5: return "Ring geometry (Hjelmslev, Barbilian, etc.)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Geometric closure systems
	  switch(min)
	    {
	    case  5: return "Abstract (Maeda) geometries";
	    case 10: return "Abstract geometries with exchange axiom";
	    case 15: return "Abstract geometries with parallelism";
	    case 20: return "Combinatorial geometries";
	    case 25: return "Lattices of subspaces";
	    case 30: return "Continuous geometries and related topics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Finite geometry and special incidence structures
	  switch(min)
	    {
	    case  5: return "General block designs";
	    case 10: return "Steiner systems";
	    case 12: return "Generalized quadrangles, generalized polygons";
	    case 14: return "Finite partial geometries (general), nets, partial spreads";
	    case 15: return "Affine and projective planes";
	    case 20: return "Combinatorial structures in finite projective spaces";
	    case 21: return "Blocking sets, ovals, k-arcs";
	    case 22: return "Linear codes and caps in Galois spaces";
	    case 23: return "Spreads and packing problems";
	    case 24: return "Buildings and the geometry of diagrams";
	    case 25: return "Other finite nonlinear geometries";
	    case 26: return "Other finite linear geometries";
	    case 30: return "Other finite incidence structures";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // Metric geometry
	  switch(min)
	    {
	    case  5: return "Absolute planes";
	    case 10: return "Absolute spaces";
	    case 15: return "Reflection groups, reflection geometries";
	    case 20: return "Congruence and orthogonality";
	    case 25: return "Orthogonal and unitary groups";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'G': // Ordered geometries (ordered incidence structures, etc.)
	  switch(min)
	    {
	    case  5: return "Ordered geometries (ordered incidence structures, etc.)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'H': // Topological geometry
	  switch(min)
	    {
	    case  5: return "General theory";
	    case 10: return "Topological linear incidence structures";
	    case 15: return "Topological nonlinear incidence structures";
	    case 20: return "Topological geometries on manifolds";
	    case 25: return "Geometries with differentiable structure";
	    case 30: return "Geometries with algebraic manifold structure";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'J': // Incidence groups
	  switch(min)
	    {
	    case  5: return "General theory";
	    case 10: return "Projective incidence groups";
	    case 15: return "Kinematic spaces";
	    case 20: return "Representation by near-fields and near-algebras";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'K': // Distance geometry
	  switch(min)
	    {
	    case  5: return "General theory";
	    case 10: return "Synthetic differential geometry";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'L': // Geometric order structures
	  switch(min)
	    {
	    case  5: return "Geometry of orders of nondifferentiable curves";
	    case 10: return "Directly differentiable curves";
	    case 15: return "n-vertex theorems via direct methods";
	    case 20: return "Geometry of orders of surfaces";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'M': // Real and complex geometry
	  switch(min)
	    {
	    case  4: return "Elementary problems in Euclidean geometries";
	    case  5: return "Euclidean geometries (general) and generalizations";
	    case  9: return "Elementary problems in hyperbolic and elliptic geometries";
	    case 10: return "Hyperbolic and elliptic geometries (general) and generalizations";
	    case 15: return "Geometric constructions";
	    case 16: return "Inequalities and extremum problems";
	    case 20: return "Polyhedra and polytopes; regular figures, division of spaces";
	    case 25: return "Length, area and volume";
	    case 30: return "Line geometries and their generalizations";
	    case 35: return "Synthetic treatment of fundamental manifolds in projective geometries (Grassmannians, Veronesians and their generalizations)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'N': // Analytic and descriptive geometry
	  switch(min)
	    {
	    case  5: return "Descriptive geometry";
	    case 10: return "Affine analytic geometry";
	    case 15: return "Projective analytic geometry";
	    case 20: return "Euclidean analytic geometry";
	    case 25: return "Analytic geometry with other transformation groups";
	    case 30: return "Geometry of classical groups";
	    case 35: return "Questions of classical algebraic geometry";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'P': // Geometry and physics
	  switch(min)
	    {
	    case  5: return "Geometry and physics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 52: // Convex and discrete geometry
      switch (med)
	{
	case 'A': // General convexity
	  switch(min)
	    {
	    case  1: return "Axiomatic and generalized convexity";
	    case  5: return "Convex sets without dimension restrictions";
	    case  7: return "Convex sets in topological vector spaces";
	    case 10: return "Convex sets in 2 dimensions (including convex curves)";
	    case 15: return "Convex sets in 3 dimensions (including convex surfaces)";
	    case 20: return "Convex sets in n dimensions (including convex hypersurfaces)";
	    case 21: return "Finite-dimensional Banach spaces (including special norms, zonoids, etc.)";
	    case 22: return "Random convex sets and integral geometry";
	    case 23: return "Asymptotic theory of convex bodies";
	    case 27: return "Approximation by convex sets";
	    case 30: return "Variants of convex sets (star-shaped, (m,n)-convex, etc.)";
	    case 35: return "Helly-type theorems and geometric transversal theory";
	    case 37: return "Other problems of combinatorial convexity";
	    case 38: return "Length, area, volume";
	    case 39: return "Mixed volumes and related topics";
	    case 40: return "Inequalities and extremum problems";
	    case 41: return "Convex functions and convex programs";
	    case 55: return "Spherical and hyperbolic convexity";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Polytopes and polyhedra
	  switch(min)
	    {
	    case  5: return "Combinatorial properties (number of faces, shortest paths, etc.)";
	    case 10: return "Three-dimensional polytopes";
	    case 11: return "n-dimensional polytopes";
	    case 12: return "Special polytopes (linear programming, centrally symmetric, etc.)";
	    case 15: return "Symmetry properties of polytopes";
	    case 20: return "Lattice polytopes (including relations with commutative algebra and algebraic geometry)";
	    case 22: return "Shellability";
	    case 35: return "Gale and other diagrams";
	    case 40: return "Matroids (realizations in the context of convex polytopes, convexity in combinatorial structures, etc.)";
	    case 45: return "Dissections and valuations (Hilbert's third problem, etc.)";
	    case 55: return "Computational aspects related to convexity";
	    case 60: return "Isoperimetric problems for polytopes";
	    case 70: return "Polyhedral manifolds";
	    case 99: return "None of the above, but in this section ";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Discrete geometry
	  switch(min)
	    {
	    case  5: return "Lattices and convex bodies in 2  dimensions";
	    case  7: return "Lattices and convex bodies in n dimensions";
	    case 10: return "Erdős problems and related topics of discrete geometry";
	    case 15: return "Packing and covering in 2 dimensions";
	    case 17: return "Packing and covering in n dimensions";
	    case 20: return "Tilings in 2 dimensions";
	    case 22: return "Tilings in n dimensions";
	    case 23: return "Quasicrystals, aperiodic tilings";
	    case 25: return "Rigidity and flexibility of structures";
	    case 26: return "Circle packings and discrete conformal geometry";
	    case 30: return "Planar arrangements of lines and pseudolines";
	    case 35: return "Arrangements of points, flats, hyperplanes";
	    case 40: return "Oriented matroids";
	    case 45: return "Combinatorial complexity of geometric structures";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 53: // Differential geometry
      switch (med)
	{
	case 'A': // Classical differential geometry
	  switch(min)
	    {
	    case  4: return "Curves in Euclidean space";
	    case  5: return "Surfaces in Euclidean space";
	    case  7: return "Higher-dimensional and -codimensional surfaces in Euclidean n-space";
	    case 10: return "Minimal surfaces, surfaces with prescribed mean curvature";
	    case 15: return "Affine differential geometry";
	    case 17: return "Kinematics";
	    case 20: return "Projective differential geometry";
	    case 25: return "Differential line geometry";
	    case 30: return "Conformal differential geometry";
	    case 35: return "Non-Euclidean differential geometry";
	    case 40: return "Other special differential geometries";
	    case 45: return "Vector and tensor analysis";
	    case 55: return "Differential invariants (local theory), geometric objects";
	    case 60: return "Geometry of webs";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Local differential geometry
	  switch(min)
	    {
	    case  5: return "Linear and affine connections";
	    case 10: return "Projective connections";
	    case 15: return "Other connections";
	    case 20: return "Local Riemannian geometry";
	    case 21: return "Methods of Riemannian geometry";
	    case 25: return "Local submanifolds";
	    case 30: return "Lorentz metrics, indefinite metrics";
	    case 35: return "Hermitian and Kählerian structures";
	    case 40: return "Finsler spaces and generalizations (areal metrics)";
	    case 50: return "Applications to physics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Global differential geometry
	  switch(min)
	    {
	    case  5: return "Connections, general theory";
	    case  7: return "Special connections and metrics on vector bundles (Hermite-Einstein-Yang-Mills)";
	    case  8: return "Gerbes, differential characters: differential geometric aspects";
	    case 10: return "G-structures";
	    case 12: return "Foliations (differential geometric aspects)";
	    case 15: return "General geometric structures on manifolds (almost complex, almost product structures, etc.)";
	    case 17: return "Sub-Riemannian geometry";
	    case 20: return "Global Riemannian geometry, including pinching";
	    case 21: return "Methods of Riemannian geometry, including PDE methods; curvature restrictions";
	    case 22: return "Geodesics";
	    case 23: return "Global geometric and topological methods (à la Gromov); differential geometric analysis on metric spaces";
	    case 24: return "Rigidity results";
	    case 25: return "Special Riemannian manifolds (Einstein, Sasakian, etc.)";
	    case 26: return "Hyper-Kähler and quaternionic Kähler geometry, “special” geometry";
	    case 27: return "Spin and Spinc geometry";
	    case 28: return "Twistor methods";
	    case 29: return "Issues of holonomy";
	    case 30: return "Homogeneous manifolds";
	    case 35: return "Symmetric spaces";
	    case 38: return "Calibrations and calibrated geometries";
	    case 40: return "Global submanifolds";
	    case 42: return "Immersions (minimal, prescribed curvature, tight, etc.)";
	    case 43: return "Differential geometric aspects of harmonic maps";
	    case 44: return "Geometric evolution equations (mean curvature flow, Ricci flow, etc.)";
	    case 45: return "Global surface theory (convex surfaces à la A. D. Aleksandrov)";
	    case 50: return "Lorentz manifolds, manifolds with indefinite metrics";
	    case 55: return "Hermitian and Kählerian manifolds";
	    case 56: return "Other complex differential geometry";
	    case 60: return "Finsler spaces and generalizations (areal metrics)";
	    case 65: return "Integral geometry";
	    case 70: return "Direct methods (G-spaces of Busemann, etc.)";
	    case 75: return "Geometric orders, order geometry";
	    case 80: return "Applications to physics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Symplectic geometry, contact geometry
	  switch(min)
	    {
	    case  5: return "Symplectic manifolds, general";
	    case 10: return "Contact manifolds, general";
	    case 12: return "Lagrangian submanifolds; Maslov index";
	    case 15: return "Almost contact and almost symplectic manifolds";
	    case 17: return "Poisson manifolds; Poisson groupoids and algebroids";
	    case 18: return "Generalized geometries (à la Hitchin)";
	    case 20: return "Momentum maps; symplectic reduction";
	    case 22: return "Canonical transformations";
	    case 25: return "Geodesic flows";
	    case 30: return "Symplectic structures of moduli spaces";
	    case 35: return "Global theory of symplectic and contact manifolds";
	    case 37: return "Mirror symmetry, symplectic aspects; homological mirror symmetry; Fukaya category";
	    case 40: return "Floer homology and cohomology, symplectic aspects";
	    case 42: return "Symplectic field theory; contact homology";
	    case 45: return "Gromov-Witten invariants, quantum cohomology, Frobenius manifolds";
	    case 50: return "Geometric quantization";
	    case 55: return "Deformation quantization, star products";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'Z': // Applications to physics
	  switch(min)
	    {
	    case  5: return "Applications to physics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 54: // General topology
      switch (med)
	{
	case 'A': // Generalities
	  switch(min)
	    {
	    case  5: return "Topological spaces and generalizations (closure spaces, etc.)";
	    case 10: return "Several topologies on one set (change of topology, comparison of topologies, lattices of topologies)";
	    case 15: return "Syntopogeneous structures";
	    case 20: return "Convergence in general topology (sequences, filters, limits, convergence spaces, etc.)";
	    case 25: return "Cardinality properties (cardinal functions and inequalities, discrete subsets)";
	    case 35: return "Consistency and independence results";
	    case 40: return "Fuzzy topology";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Basic constructions
	  switch(min)
	    {
	    case  5: return "Subspaces";
	    case 10: return "Product spaces";
	    case 15: return "Quotient spaces, decompositions";
	    case 17: return "Adjunction spaces and similar constructions";
	    case 20: return "Hyperspaces";
	    case 30: return "Categorical methods";
	    case 35: return "Spectra";
	    case 40: return "Presheaves and sheaves";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Maps and general types of spaces defined by maps
	  switch(min)
	    {
	    case  5: return "Continuous maps";
	    case  8: return "Weak and generalized continuity";
	    case 10: return "Special maps on topological spaces (open, closed, perfect, etc.)";
	    case 15: return "Retraction";
	    case 20: return "Extension of maps";
	    case 25: return "Embedding";
	    case 30: return "Real-valued functions";
	    case 35: return "Function spaces";
	    case 40: return "Algebraic properties of function spaces";
	    case 45: return "C- and C*-embedding";
	    case 50: return "Special sets defined by functions";
	    case 55: return "Absolute neighborhood extensor, absolute extensor, absolute neighborhood retract (ANR), absolute retract spaces (general properties)";
	    case 56: return "Shape theory";
	    case 60: return "Set-valued maps";
	    case 65: return "Selections";
	    case 70: return "Entropy";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Fairly general properties
	  switch(min)
	    {
	    case  5: return "Connected and locally connected spaces (general aspects)";
	    case 10: return "Lower separation axioms (T₀, T₃, etc.)";
	    case 15: return "Higher separation axioms (completely regular, normal, perfectly or collectionwise normal, etc.)";
	    case 20: return "Noncompact covering properties (paracompact, Lindelöf, etc.)";
	    case 25: return "“P-minimal” and “P-closed” spaces";
	    case 30: return "Compactness";
	    case 35: return "Extensions of spaces (compactifications, supercompactifications, completions, etc.)";
	    case 40: return "Remainders";
	    case 45: return "Local compactness, σ-compactness";
	    case 50: return "k-spaces";
	    case 55: return "Sequential spaces";
	    case 60: return "Realcompactness and realcompactification";
	    case 65: return "Separability";
	    case 70: return "Base properties";
	    case 80: return "Special constructions of spaces (spaces of ultrafilters, etc.)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Spaces with richer structures
	  switch(min)
	    {
	    case  5: return "Proximity structures and generalizations";
	    case 15: return "Uniform structures and generalizations";
	    case 17: return "Nearness spaces";
	    case 18: return "p-spaces, M-spaces, σ-spaces, etc.";
	    case 20: return "Stratifiable spaces, cosmic spaces, etc.";
	    case 25: return "Semimetric spaces";
	    case 30: return "Moore spaces";
	    case 35: return "Metric spaces, metrizability";
	    case 40: return "Special maps on metric spaces";
	    case 45: return "Compact (locally compact) metric spaces";
	    case 50: return "Complete metric spaces";
	    case 52: return "Baire category, Baire spaces";
	    case 55: return "Bitopologies";
	    case 70: return "Probabilistic metric spaces";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // Special properties
	  switch(min)
	    {
	    case  5: return "Linearly ordered topological spaces, generalized ordered spaces, and partially ordered spaces";
	    case 15: return "Continua and generalizations";
	    case 35: return "Higher-dimensional local connectedness";
	    case 45: return "Dimension theory";
	    case 50: return "Spaces of dimension ≤1; curves, dendrites";
	    case 55: return "Unicoherence, multicoherence";
	    case 65: return "Topological characterizations of particular spaces";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'G': // Peculiar spaces
	  switch(min)
	    {
	    case  5: return "Extremally disconnected spaces, F-spaces, etc.";
	    case 10: return "P-spaces";
	    case 12: return "Scattered spaces";
	    case 15: return "Pathological spaces";
	    case 20: return "Counterexamples";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'H': // Connections with other structures, applications
	  switch(min)
	    {
	    case  5: return "Descriptive set theory (topological aspects of Borel, analytic, projective, etc. sets)";
	    case 10: return "Topological representations of algebraic systems";
	    case 11: return "Topological groups";
	    case 12: return "Topological lattices, etc.";
	    case 13: return "Topological fields, rings, etc.";
	    case 15: return "Transformation groups and semigroups";
	    case 20: return "Topological dynamics";
	    case 25: return "Fixed-point and coincidence theorems";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'J': // Nonstandard topology
	  switch(min)
	    {
	    case  5: return "Nonstandard topology";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 55: // Algebraic topology
      switch (med)
	{
	case 'M': // Classical topics
	  switch(min)
	    {
	    case  5: return "Duality";
	    case 10: return "Dimension theory";
	    case 15: return "Absolute neighborhood retracts";
	    case 20: return "Fixed points and coincidences";
	    case 25: return "Degree, winding number";
	    case 30: return "Ljusternik-Schnirelman (Lyusternik-Shnirel'man) category of a space";
	    case 35: return "Finite groups of transformations (including Smith theory)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'N': // Homology and cohomology theories
	  switch(min)
	    {
	    case  5: return "Čech types";
	    case  7: return "Steenrod-Sitnikov homologies";
	    case 10: return "Singular theory";
	    case 15: return "K-theory";
	    case 20: return "Generalized (extraordinary) homology and cohomology theories";
	    case 22: return "Bordism and cobordism theories, formal group laws";
	    case 25: return "Homology with local coefficients, equivariant cohomology";
	    case 30: return "Sheaf cohomology";
	    case 32: return "Orbifold cohomology";
	    case 33: return "Intersection homology and cohomology";
	    case 34: return "Elliptic cohomology";
	    case 35: return "Other homology theories";
	    case 40: return "Axioms for homology theory and uniqueness theorems";
	    case 45: return "Products and intersections";
	    case 91: return "Equivariant homology and cohomology";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'P': // Homotopy theory
	  switch(min)
	    {
	    case  5: return "Homotopy extension properties, cofibrations";
	    case 10: return "Homotopy equivalences";
	    case 15: return "Classification of homotopy type";
	    case 20: return "Eilenberg-Mac Lane spaces";
	    case 25: return "Spanier-Whitehead duality";
	    case 30: return "Eckmann-Hilton duality";
	    case 35: return "Loop spaces";
	    case 40: return "Suspensions";
	    case 42: return "Stable homotopy theory, spectra";
	    case 43: return "Spectra with additional structure (E∞, A∞, ring spectra, etc.)";
	    case 45: return "H-spaces and duals";
	    case 47: return "Infinite loop spaces";
	    case 48: return "Loop space machines, operads";
	    case 50: return "String topology";
	    case 55: return "Shape theory";
	    case 57: return "Proper homotopy theory";
	    case 60: return "Localization and completion";
	    case 62: return "Rational homotopy theory";
	    case 65: return "Homotopy functors";
	    case 91: return "Equivariant homotopy theory";
	    case 92: return "Relations between equivariant and nonequivariant homotopy theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'Q': // Homotopy groups
	  switch(min)
	    {
	    case  5: return "Homotopy groups, general; sets of homotopy classes";
	    case  7: return "Shape groups";
	    case 10: return "Stable homotopy groups";
	    case 15: return "Whitehead products and generalizations";
	    case 20: return "Homotopy groups of wedges, joins, and simple spaces";
	    case 25: return "Hopf invariants";
	    case 35: return "Operations in homotopy groups";
	    case 40: return "Homotopy groups of spheres";
	    case 45: return "Stable homotopy of spheres";
	    case 50: return "J-morphism";
	    case 51: return "v_n-periodicity";
	    case 52: return "Homotopy groups of special spaces";
	    case 55: return "Cohomotopy groups";
	    case 70: return "Homotopy groups of special types";
	    case 91: return "Equivariant homotopy groups";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'R': // Fiber spaces and bundles
	  switch(min)
	    {
	    case  5: return "Fiber spaces";
	    case 10: return "Fiber bundles";
	    case 12: return "Transfer";
	    case 15: return "Classification";
	    case 20: return "Spectral sequences and homology of fiber spaces";
	    case 25: return "Sphere bundles and vector bundles";
	    case 35: return "Classifying spaces of groups and H-spaces";
	    case 37: return "Maps between classifying spaces";
	    case 40: return "Homology of classifying spaces, characteristic classes";
	    case 45: return "Homology and homotopy of BO and BU; Bott periodicity";
	    case 50: return "Stable classes of vector space bundles, K-theory";
	    case 55: return "Fiberings with singularities";
	    case 60: return "Microbundles and block bundles";
	    case 65: return "Generalizations of fiber spaces and bundles";
	    case 70: return "Fibrewise topology";
	    case 80: return "Discriminantal varieties, configuration spaces";
	    case 91: return "Equivariant fiber spaces and bundles";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'S': // Operations and obstructions
	  switch(min)
	    {
	    case  5: return "Primary cohomology operations";
	    case 10: return "Steenrod algebra";
	    case 12: return "Dyer-Lashof operations";
	    case 15: return "Symmetric products, cyclic products";
	    case 20: return "Secondary and higher cohomology operations";
	    case 25: return "K-theory operations and generalized cohomology operations";
	    case 30: return "Massey products";
	    case 35: return "Obstruction theory";
	    case 36: return "Extension and compression of mappings";
	    case 37: return "Classification of mappings";
	    case 40: return "Sectioning fiber spaces and bundles";
	    case 45: return "Postnikov systems, k-invariants";
	    case 91: return "Equivariant operations and obstructions";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'T': // Spectral sequences
	  switch(min)
	    {
	    case  5: return "General";
	    case 10: return "Serre spectral sequences";
	    case 15: return "Adams spectral sequences";
	    case 20: return "Eilenberg-Moore spectral sequences";
	    case 25: return "Generalized cohomology";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'U': // Applied homological algebra and category theory
	  switch(min)
	    {
	    case  5: return "Abstract complexes";
	    case 10: return "Simplicial sets and complexes";
	    case 15: return "Chain complexes";
	    case 20: return "Universal coefficient theorems, Bockstein operator";
	    case 25: return "Homology of a product, Künneth formula";
	    case 30: return "Duality";
	    case 35: return "Abstract and axiomatic homotopy theory";
	    case 40: return "Topological categories, foundations of homotopy theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 57: // Manifolds and cell complexes
      switch (med)
	{
	case 'M': // Low-dimensional topology
	  switch(min)
	    {
	    case  5: return "Fundamental group, presentations, free differential calculus";
	    case  7: return "Topological methods in group theory";
	    case 10: return "Covering spaces";
	    case 12: return "Special coverings, e.g. branched";
	    case 15: return "Relations with graph theory";
	    case 20: return "Two-dimensional complexes";
	    case 25: return "Knots and links in S³";
	    case 27: return "Invariants of knots and 3-manifolds";
	    case 30: return "Wild knots and surfaces, etc., wild embeddings";
	    case 35: return "Dehn's lemma, sphere theorem, loop theorem, asphericity";
	    case 40: return "Characterizations of E³ and S³ (Poincaré conjecture)";
	    case 50: return "Geometric structures on low-dimensional manifolds";
	    case 60: return "Group actions in low dimensions";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'N': // Topological manifolds
	  switch(min)
	    {
	    case  5: return "Topology of E², 2-manifolds";
	    case 10: return "Topology of general 3-manifolds";
	    case 12: return "Topology of E³ and S³";
	    case 13: return "Topology of E⁴, 4-manifolds";
	    case 15: return "Topology of En, n-manifolds (4≤n≤∞)";
	    case 16: return "Geometric structures on manifolds";
	    case 17: return "Topology of topological vector spaces";
	    case 20: return "Topology of infinite-dimensional manifolds";
	    case 25: return "Shapes";
	    case 30: return "Engulfing";
	    case 35: return "Embeddings and immersions";
	    case 37: return "Isotopy and pseudo-isotopy";
	    case 40: return "Neighborhoods of submanifolds";
	    case 45: return "Flatness and tameness";
	    case 50: return "Sn-1⊂En, Schoenflies problem";
	    case 55: return "Microbundles and block bundles";
	    case 60: return "Cellularity";
	    case 65: return "Algebraic topology of manifolds";
	    case 70: return "Cobordism and concordance";
	    case 75: return "General position and transversality";
	    case 80: return "Stratifications";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'P': // Generalized manifolds
	  switch(min)
	    {
	    case  5: return "Local properties of generalized manifolds";
	    case 10: return "Poincaré duality spaces";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'Q': // PL-topology
	  switch(min)
	    {
	    case  5: return "General topology of complexes";
	    case 10: return "Simple homotopy type, Whitehead torsion, Reidemeister-Franz torsion, etc.";
	    case 12: return "Wall finiteness obstruction for CW-cmplexes";
	    case 15: return "Triangulating manifolds";
	    case 20: return "Cobordism";
	    case 25: return "Comparison of PL-structures: classification, Hauptvermutung";
	    case 30: return "Engulfing";
	    case 35: return "Embeddings and immersions";
	    case 37: return "Isotopy";
	    case 40: return "Regular neighborhoods";
	    case 45: return "Knots and links (in high dimensions)";
	    case 50: return "Microbundles and block bundles";
	    case 55: return "Approximations";
	    case 60: return "Cobordism and concordance";
	    case 65: return "General position and transversality";
	    case 91: return "Equivariant PL-topology";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'R': // Differential topology
	  switch(min)
	    {
	    case  5: return "Triangulating";
	    case 10: return "Smoothing";
	    case 12: return "Smooth approximations";
	    case 15: return "Specialized structures on manifolds (spin manifolds, framed manifolds, etc.)";
	    case 17: return "Symplectic and contact topology";
	    case 18: return "Topology and geometry of orbifolds";
	    case 19: return "Algebraic topology on manifolds";
	    case 20: return "Characteristic classes and numbers";
	    case 22: return "Topology of vector bundles and fiber bundles";
	    case 25: return "Vector fields, frame fields";
	    case 27: return "Controllability of vector fields on C∞ and real-analytic manifolds";
	    case 30: return "Foliations; geometric theory";
	    case 32: return "Classifying spaces for foliations; Gelfand-Fuks cohomology";
	    case 35: return "Differentiable mappings";
	    case 40: return "Embeddings";
	    case 42: return "Immersions";
	    case 45: return "Singularities of differentiable mappings";
	    case 50: return "Diffeomorphisms";
	    case 52: return "Isotopy";
	    case 55: return "Differentiable structures";
	    case 56: return "Topological quantum field theories";
	    case 57: return "Applications of global analysis to structures on manifolds, Donaldson and Seiberg-Witten invariants";
	    case 58: return "Floer homology";
	    case 60: return "Homotopy spheres, Poincaré conjecture";
	    case 65: return "Surgery and handlebodies";
	    case 67: return "Surgery obstructions, Wall groups";
	    case 70: return "Critical points and critical submanifolds";
	    case 75: return "O- and SO-cobordism";
	    case 77: return "Complex cobordism (U- and SU-cobordism)";
	    case 80: return "h- and s-cobordism";
	    case 85: return "Equivariant cobordism";
	    case 90: return "Other types of cobordism";
	    case 91: return "Equivariant algebraic topology of manifolds";
	    case 95: return "Realizing cycles by submanifolds";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'S': // Topological transformation groups
	  switch(min)
	    {
	    case  5: return "Topological properties of groups of homeomorphisms or diffeomorphisms";
	    case 10: return "Compact groups of homeomorphisms";
	    case 15: return "Compact Lie groups of differentiable transformations";
	    case 17: return "Finite transformation groups";
	    case 20: return "Noncompact Lie groups of transformations";
	    case 25: return "Groups acting on specific manifolds";
	    case 30: return "Discontinuous groups of transformations";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'T': // Homology and homotopy of topological groups and related structures
	  switch(min)
	    {
	    case  5: return "Hopf algebras";
	    case 10: return "Homology and cohomology of Lie groups";
	    case 15: return "Homology and cohomology of homogeneous spaces of Lie groups";
	    case 20: return "Homotopy groups of topological groups and homogeneous spaces";
	    case 25: return "Homology and cohomology of H-spaces";
	    case 30: return "Bar and cobar constructions";
	    case 35: return "Applications of Eilenberg-Moore spectral sequences";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 58: // Global analysis, analysis on manifolds
      switch (med)
	{
	case 'A': // General theory of differentiable manifolds
	  switch(min)
	    {
	    case  3: return "Topos-theoretic approach to differentiable manifolds";
	    case  5: return "Differentiable manifolds, foundations";
	    case  7: return "Real-analytic and Nash manifolds";
	    case 10: return "Differential forms";
	    case 12: return "de Rham theory";
	    case 14: return "Hodge theory";
	    case 15: return "Exterior differential systems (Cartan theory)";
	    case 17: return "Pfaffian systems";
	    case 20: return "Jets";
	    case 25: return "Currents";
	    case 30: return "Vector distributions (subbundles of the tangent bundles)";
	    case 32: return "Natural bundles";
	    case 35: return "Stratified sets";
	    case 40: return "Differential spaces";
	    case 50: return "Supermanifolds and graded manifolds";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Infinite-dimensional manifolds
	  switch(min)
	    {
	    case  5: return "Homotopy and topological questions";
	    case 10: return "Differentiability questions";
	    case 12: return "Questions of holomorphy";
	    case 15: return "Fredholm structures";
	    case 20: return "Riemannian, Finsler and other geometric structures";
	    case 25: return "Group structures and generalizations on infinite-dimensional manifolds";
	    case 32: return "Geometry of quantum groups";
	    case 34: return "Noncommutative geometry (à la Connes)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Calculus on manifolds; nonlinear operators
	  switch(min)
	    {
	    case  5: return "Real-valued functions";
	    case  6: return "Set valued and function-space valued mappings";
	    case  7: return "Continuity properties of mappings";
	    case 10: return "Holomorphic maps";
	    case 15: return "Implicit function theorems; global Newton methods";
	    case 20: return "Differentiation theory (Gateaux, Fréchet, etc.)";
	    case 25: return "Differentiable maps";
	    case 30: return "Fixed point theorems on manifolds";
	    case 35: return "Integration on manifolds; measures on manifolds";
	    case 40: return "Spectral theory; eigenvalue problems";
	    case 50: return "Analysis on supermanifolds or graded manifolds";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Spaces and manifolds of mappings (including nonlinear versions of 46Exx)
	  switch(min)
	    {
	    case  5: return "Groups of diffeomorphisms and homeomorphisms as manifolds";
	    case  7: return "Groups and semigroups of nonlinear operators";
	    case 10: return "Spaces of imbeddings and immersions";
	    case 15: return "Manifolds of mappings";
	    case 17: return "Manifolds of metrics (esp. Riemannian)";
	    case 19: return "Group actions and symmetry properties";
	    case 20: return "Measures (Gaussian, cylindrical, etc.) on manifolds of maps";
	    case 25: return "Equations in function spaces; evolution equations";
	    case 27: return "Moduli problems for differential geometric structures";
	    case 29: return "Moduli problems for topological structures";
	    case 30: return "Applications (in quantum mechanics (Feynman path integrals), relativity, fluid dynamics, etc.)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Variational problems in infinite-dimensional spaces
	  switch(min)
	    {
	    case  5: return "Abstract critical point theory (Morse theory, Ljusternik-Schnirelman (Lyusternik-Shnirel'man) theory, etc.)";
	    case  7: return "Abstract bifurcation theory";
	    case  9: return "Group-invariant bifurcation theory";
	    case 10: return "Applications to the theory of geodesics (problems in one independent variable)";
	    case 11: return "Critical metrics";
	    case 12: return "Applications to minimal surfaces (problems in two independent variables)";
	    case 15: return "Application to extremal problems in several variables; Yang-Mills functionals, etc.";
	    case 17: return "Pareto optimality, etc., applications to economics";
	    case 20: return "Harmonic maps, etc.";
	    case 25: return "Applications to control theory";
	    case 30: return "Variational principles";
	    case 35: return "Variational inequalities (global problems)";
	    case 40: return "Group actions";
	    case 50: return "Applications";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'H': // Pseudogroups, differentiable groupoids and general structures on manifolds
	  switch(min)
	    {
	    case  5: return "Pseudogroups and differentiable groupoids";
	    case 10: return "Cohomology of classifying spaces for pseudogroup structures (Spencer, Gelfand-Fuks, etc.)";
	    case 15: return "Deformations of structures";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'J': // Partial differential equations on manifolds; differential operators
	  switch(min)
	    {
	    case  5: return "Elliptic equations on manifolds, general theory";
	    case 10: return "Differential complexes; elliptic complexes";
	    case 15: return "Relations with hyperfunctions";
	    case 20: return "Index theory and related fixed point theorems";
	    case 22: return "Exotic index theories";
	    case 26: return "Elliptic genera";
	    case 28: return "Eta-invariants, Chern-Simons invariants";
	    case 30: return "Spectral flows";
	    case 32: return "Boundary value problems on manifolds";
	    case 35: return "Heat and other parabolic equation methods";
	    case 37: return "Perturbations; asymptotics";
	    case 40: return "Pseudodifferential and Fourier integral operators on manifolds";
	    case 42: return "Noncommutative global analysis, noncommutative residues";
	    case 45: return "Hyperbolic equations";
	    case 47: return "Propagation of singularities; initial value problems";
	    case 50: return "Spectral problems; spectral geometry; scattering theory";
	    case 51: return "Relations between spectral theory and ergodic theory, e.g. quantum unique ergodicity";
	    case 52: return "Determinants and determinant bundles, analytic torsion";
	    case 53: return "Isospectrality";
	    case 55: return "Bifurcation";
	    case 60: return "Relations with special manifold structures (Riemannian, Finsler, etc.)";
	    case 65: return "Diffusion processes and stochastic analysis on manifolds";
	    case 70: return "Invariance and symmetry properties";
	    case 72: return "Correspondences and other transformation methods (e.g. Lie-Bäcklund)";
	    case 90: return "Applications";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'K': // Theory of singularities and catastrophe theory
	  switch(min)
	    {
	    case  5: return "Critical points of functions and mappings";
	    case 10: return "Monodromy";
	    case 15: return "Topological properties of mappings";
	    case 20: return "Algebraic and analytic properties of mappings";
	    case 25: return "Stability";
	    case 30: return "Global theory";
	    case 35: return "Catastrophe theory";
	    case 40: return "Classification; finite determinacy of map germs";
	    case 45: return "Singularities of vector fields, topological aspects";
	    case 50: return "Normal forms";
	    case 55: return "Asymptotic behavior";
	    case 60: return "Deformation of singularities";
	    case 65: return "Topological invariants";
	    case 70: return "Symmetries, equivariance";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'Z': // Applications to physics
	  switch(min)
	    {
	    case  5: return "Applications to physics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 60: // Probability theory and stochastic processes
      switch (med)
	{
	case 'A': // Foundations of probability theory
	  switch(min)
	    {
	    case  5: return "Axioms; other general questions";
	    case 10: return "Probabilistic measure theory";
	    case 86: return "Fuzzy probability";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Probability theory on algebraic and topological structures
	  switch(min)
	    {
	    case  5: return "Probability measures on topological spaces";
	    case 10: return "Convergence of probability measures";
	    case 11: return "Probability theory on linear topological spaces";
	    case 12: return "Limit theorems for vector-valued random variables (infinite-dimensional case)";
	    case 15: return "Probability measures on groups or semigroups, Fourier transforms, factorization";
	    case 20: return "Random matrices (probabilistic aspects; for algebraic aspects see 15B52)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Combinatorial probability
	  switch(min)
	    {
	    case  5: return "Combinatorial probability";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Geometric probability and stochastic geometry
	  switch(min)
	    {
	    case  5: return "Geometric probability and stochastic geometry";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Distribution theory
	  switch(min)
	    {
	    case  5: return "Distributions: general theory";
	    case  7: return "Infinitely divisible distributions; stable distributions";
	    case 10: return "Characteristic functions; other transforms";
	    case 15: return "Inequalities; stochastic orderings";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // Limit theorems
	  switch(min)
	    {
	    case  5: return "Central limit and other weak theorems";
	    case 10: return "Large deviations";
	    case 15: return "Strong theorems";
	    case 17: return "Functional limit theorems; invariance principles";
	    case 20: return "Zero-one laws";
	    case 25: return "Lp-limit theorems";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'G': // Stochastic processes
	  switch(min)
	    {
	    case  5: return "Foundations of stochastic processes";
	    case  7: return "General theory of processes";
	    case  9: return "Exchangeability";
	    case 10: return "Stationary processes";
	    case 12: return "General second-order processes";
	    case 15: return "Gaussian processes";
	    case 17: return "Sample path properties";
	    case 18: return "Self-similar processes";
	    case 20: return "Generalized stochastic processes";
	    case 22: return "Fractional processes, including fractional Brownian motion";
	    case 25: return "Prediction theory";
	    case 30: return "Continuity and singularity of induced measures";
	    case 35: return "Signal detection and filtering";
	    case 40: return "Stopping times; optimal stopping problems; gambling theory";
	    case 42: return "Martingales with discrete parameter";
	    case 44: return "Martingales with continuous parameter";
	    case 46: return "Martingales and classical analysis";
	    case 48: return "Generalizations of martingales";
	    case 50: return "Sums of independent random variables; random walks";
	    case 51: return "Processes with independent increments; Lévy processes";
	    case 52: return "Stable processes";
	    case 55: return "Point processes";
	    case 57: return "Random measures";
	    case 60: return "Random fields";
	    case 70: return "Extreme value theory; extremal processes";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'H': // Stochastic analysis
	  switch(min)
	    {
	    case  5: return "Stochastic integrals";
	    case  7: return "Stochastic calculus of variations and the Malliavin calculus";
	    case 10: return "Stochastic ordinary differential equations";
	    case 15: return "Stochastic partial differential equations";
	    case 20: return "Stochastic integral equations";
	    case 25: return "Random operators and equations";
	    case 30: return "Applications of stochastic analysis (to PDE, etc.)";
	    case 35: return "Computational methods for stochastic equations";
	    case 40: return "White noise theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'J': // Markov processes
	  switch(min)
	    {
	    case  5: return "Discrete-time Markov processes on general state spaces";
	    case 10: return "Markov chains (discrete-time Markov processes on discrete state spaces)";
	    case 20: return "Applications of Markov chains and discrete-time Markov processes on general state spaces (social mobility, learning theory, industrial processes, etc.)";
	    case 22: return "Computational methods in Markov chains";
	    case 25: return "Continuous-time Markov processes on general state spaces";
	    case 27: return "Continuous-time Markov processes on discrete state spaces";
	    case 28: return "Applications of continuous-time Markov processes on discrete state spaces";
	    case 35: return "Transition functions, generators and resolvents";
	    case 40: return "Right processes";
	    case 45: return "Probabilistic potential theory";
	    case 50: return "Boundary theory";
	    case 55: return "Local time and additive functionals";
	    case 57: return "Multiplicative functionals";
	    case 60: return "Diffusion processes";
	    case 65: return "Brownian motion";
	    case 67: return "Stochastic (Schramm-)Loewner evolution (SLE)";
	    case 68: return "Superprocesses";
	    case 70: return "Applications of Brownian motions and diffusion theory (population genetics, absorption problems, etc.)";
	    case 75: return "Jump processes";
	    case 80: return "Branching processes (Galton-Watson, birth-and-death, etc.)";
	    case 85: return "Applications of branching processes";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'K': // Special processes
	  switch(min)
	    {
	    case  5: return "Renewal theory";
	    case 10: return "Applications (reliability, demand theory, etc.)";
	    case 15: return "Markov renewal processes, semi-Markov processes";
	    case 20: return "Applications of Markov renewal processes (reliability, queueing networks, etc.)";
	    case 25: return "Queueing theory";
	    case 30: return "Applications (congestion, allocation, storage, traffic, etc.)";
	    case 35: return "Interacting random processes; statistical mechanics type models; percolation theory";
	    case 37: return "Processes in random environments";
	    case 40: return "Other physical applications of random processes";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 62: // Statistics
      switch (med)
	{
	case 'A': // Foundational and philosophical topics
	  switch(min)
	    {
	    case  1: return "Foundations and philosophical topics";
	    case 86: return "Fuzzy analysis in statistics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Sufficiency and information
	  switch(min)
	    {
	    case  5: return "Sufficient statistics and fields";
	    case 10: return "Information-theoretic topics";
	    case 15: return "Theory of statistical experiments";
	    case 86: return "Fuzziness, sufficiency, and information";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Decision theory
	  switch(min)
	    {
	    case  5: return "General considerations";
	    case  7: return "Complete class results";
	    case 10: return "Bayesian problems; characterization of Bayes procedures";
	    case 12: return "Empirical decision procedures; empirical Bayes procedures";
	    case 15: return "Admissibility";
	    case 20: return "Minimax procedures";
	    case 25: return "Compound decision problems";
	    case 86: return "Decision theory and fuzziness";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Sampling theory, sample surveys
	  switch(min)
	    {
	    case  5: return "Sampling theory, sample surveys";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Distribution theory
	  switch(min)
	    {
	    case 10: return "Characterization and structure theory";
	    case 15: return "Exact distribution theory";
	    case 17: return "Approximations to distributions (nonasymptotic)";
	    case 20: return "Asymptotic distribution theory";
	    case 86: return "Fuzziness in connection with the topics on distributions in this section";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // Parametric inference
	  switch(min)
	    {
	    case  3: return "Hypothesis testing";
	    case  5: return "Asymptotic properties of tests";
	    case  7: return "Ranking and selection";
	    case 10: return "Point estimation";
	    case 12: return "Asymptotic properties of estimators";
	    case 15: return "Bayesian inference";
	    case 25: return "Tolerance and confidence regions";
	    case 30: return "Inference under constraints";
	    case 35: return "Robustness and adaptive procedures";
	    case 40: return "Bootstrap, jackknife and other resampling methods";
	    case 86: return "Parametric inference and fuzziness";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'G': // Nonparametric inference
	  switch(min)
	    {
	    case  5: return "Estimation";
	    case  7: return "Density estimation";
	    case  8: return "Nonparametric regression";
	    case  9: return "Resampling methods";
	    case 10: return "Hypothesis testing";
	    case 15: return "Tolerance and confidence regions";
	    case 20: return "Asymptotic properties";
	    case 30: return "Order statistics; empirical distribution functions";
	    case 32: return "Statistics of extreme values; tail inference";
	    case 35: return "Robustness";
	    case 86: return "Nonparametric inference and fuzziness";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'H': // Multivariate analysis
	  switch(min)
	    {
	    case  5: return "Characterization and structure theory";
	    case 10: return "Distribution of statistics";
	    case 11: return "Directional data; spatial statistics";
	    case 12: return "Estimation";
	    case 15: return "Hypothesis testing";
	    case 17: return "Contingency tables";
	    case 20: return "Measures of association (correlation, canonical correlation, etc.)";
	    case 25: return "Factor analysis and principal components; correspondence analysis";
	    case 30: return "Classification and discrimination; cluster analysis";
	    case 35: return "Image analysis";
	    case 86: return "Multivariate analysis and fuzziness";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'J': // Linear inference, regression
	  switch(min)
	    {
	    case  2: return "General nonlinear regression";
	    case  5: return "Linear regression";
	    case  7: return "Ridge regression; shrinkage estimators";
	    case 10: return "Analysis of variance and covariance";
	    case 12: return "Generalized linear models";
	    case 15: return "Paired and multiple comparisons";
	    case 20: return "Diagnostics";
	    case 86: return "Fuzziness, and linear inference and regression";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'K': // Design of experiments
	  switch(min)
	    {
	    case  5: return "Optimal designs";
	    case 10: return "Block designs";
	    case 15: return "Factorial designs";
	    case 20: return "Response surface designs";
	    case 25: return "Robust parameter designs";
	    case 86: return "Fuzziness and design of experiments";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'L': // Sequential methods
	  switch(min)
	    {
	    case  5: return "Sequential design";
	    case 10: return "Sequential analysis";
	    case 12: return "Sequential estimation";
	    case 15: return "Optimal stopping";
	    case 20: return "Stochastic approximation";
	    case 86: return "Fuzziness and sequential methods";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'M': // Inference from stochastic processes
	  switch(min)
	    {
	    case  2: return "Markov processes: hypothesis testing";
	    case  5: return "Markov processes: estimation";
	    case  7: return "Non-Markovian processes: hypothesis testing";
	    case  9: return "Non-Markovian processes: estimation";
	    case 10: return "Time series, auto-correlation, regression, etc.";
	    case 15: return "Spectral analysis";
	    case 20: return "Prediction";
	    case 30: return "Spatial processes";
	    case 40: return "Random fields; image analysis";
	    case 45: return "Neural nets and related approaches";
	    case 86: return "Inference from stochastic processes and fuzziness";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'N': // Survival analysis and censored data
	  switch(min)
	    {
	    case  1: return "Censored data models";
	    case  2: return "Estimation";
	    case  3: return "Testing";
	    case  5: return "Reliability and life testing";
	    case 86: return "Fuzziness, and survival analysis and censored data";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'P': // Applications
	  switch(min)
	    {
	    case  5: return "Applications to actuarial sciences and financial mathematics";
	    case 10: return "Applications to biology and medical sciences";
	    case 12: return "Applications to environmental and related topics";
	    case 15: return "Applications to psychology";
	    case 20: return "Applications to economics";
	    case 25: return "Applications to social sciences";
	    case 30: return "Applications in engineering and industry";
	    case 35: return "Applications to physics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'Q': // Statistical tables
	  switch(min)
	    {
	    case  5: return "Statistical tables";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 65: // Numerical analysis
      switch (med)
	{
	case 'A': // Tables
	  switch(min)
	    {
	    case  5: return "Tables";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Acceleration of convergence
	  switch(min)
	    {
	    case  5: return "Extrapolation to the limit, deferred corrections";
	    case 10: return "Summation of series";
	    case 15: return "Euler-Maclaurin formula";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Probabilistic methods, simulation and stochastic differential equations
	  switch(min)
	    {
	    case  5: return "Monte Carlo methods";
	    case 10: return "Random number generation";
	    case 20: return "Models, numerical methods";
	    case 30: return "Stochastic differential and integral equations";
	    case 35: return "Stochastic particle methods";
	    case 40: return "Computational Markov chains";
	    case 50: return "Other computational problems in probability";
	    case 60: return "Computational problems in statistics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Numerical approximation and computational geometry (primarily algorithms)
	  switch(min)
	    {
	    case  5: return "Interpolation";
	    case  7: return "Splines";
	    case 10: return "Smoothing, curve fitting";
	    case 15: return "Algorithms for functional approximation";
	    case 17: return "Computer aided design (modeling of curves and surfaces)";
	    case 18: return "Computer graphics, image analysis, and computational geometry";
	    case 19: return "Computational issues in computer and robotic vision";
	    case 20: return "Computation of special functions, construction of tables";
	    case 25: return "Numerical differentiation";
	    case 30: return "Numerical integration";
	    case 32: return "Quadrature and cubature formulas";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Numerical methods in complex analysis (potential theory, etc.)
	  switch(min)
	    {
	    case  5: return "Numerical methods in complex analysis (potential theory, etc.)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // Numerical linear algebra
	  switch(min)
	    {
	    case  5: return "Direct methods for linear systems and matrix inversion";
	    case  8: return "Preconditioners for iterative methods";
	    case 10: return "Iterative methods for linear systems";
	    case 15: return "Eigenvalues, eigenvectors";
	    case 18: return "Inverse eigenvalue problems";
	    case 20: return "Overdetermined systems, pseudoinverses";
	    case 22: return "Ill-posedness, regularization";
	    case 25: return "Orthogonalization";
	    case 30: return "Other matrix algorithms";
	    case 35: return "Matrix norms, conditioning, scaling";
	    case 40: return "Determinants";
	    case 50: return "Sparse matrices";
	    case 60: return "Matrix exponential and similar matrix functions";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'G': // Error analysis and interval analysis
	  switch(min)
	    {
	    case 20: return "Algorithms with automatic result verification";
	    case 30: return "Interval and finite arithmetic";
	    case 40: return "General methods in interval analysis";
	    case 50: return "Roundoff error";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'H': // Nonlinear algebraic or transcendental equations
	  switch(min)
	    {
	    case  4: return "Roots of polynomial equations";
	    case  5: return "Single equations";
	    case 10: return "Systems of equations";
	    case 17: return "Eigenvalues, eigenvectors";
	    case 20: return "Global methods, including homotopy approaches";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'J': // Numerical analysis in abstract spaces
	  switch(min)
	    {
	    case  5: return "General theory";
	    case  8: return "Abstract evolution equations";
	    case 10: return "Equations with linear operators (do not use 65Fxx)";
	    case 15: return "Equations with nonlinear operators (do not use 65Hxx)";
	    case 20: return "Improperly posed problems; regularization";
	    case 22: return "Inverse problems";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'K': // Mathematical programming, optimization and variational techniques
	  switch(min)
	    {
	    case  5: return "Mathematical programming methods";
	    case 10: return "Optimization and variational techniques";
	    case 15: return "Numerical methods for variational inequalities and related problems";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'L': // Ordinary differential equations
	  switch(min)
	    {
	    case  3: return "Functional-differential equations";
	    case  4: return "Stiff equations";
	    case  5: return "Initial value problems";
	    case  6: return "Multistep, Runge-Kutta and extrapolation methods";
	    case  7: return "Numerical investigation of stability of solutions";
	    case  8: return "Improperly posed problems";
	    case  9: return "Inverse problems";
	    case 10: return "Boundary value problems";
	    case 11: return "Singularly perturbed problems";
	    case 12: return "Finite difference methods";
	    case 15: return "Eigenvalue problems";
	    case 20: return "Stability and convergence of numerical methods";
	    case 50: return "Mesh generation and refinement";
	    case 60: return "Finite elements, Rayleigh-Ritz, Galerkin and collocation methods";
	    case 70: return "Error bounds";
	    case 80: return "Methods for differential-algebraic equations";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'M': // Partial differential equations, initial value and time-dependent initial-boundary value problems
	  switch(min)
	    {
	    case  6: return "Finite difference methods";
	    case  8: return "Finite volume methods";
	    case 12: return "Stability and convergence of numerical methods";
	    case 15: return "Error bounds";
	    case 20: return "Method of lines";
	    case 22: return "Solution of discretized equations";
	    case 25: return "Method of characteristics";
	    case 30: return "Improperly posed problems";
	    case 32: return "Inverse problems";
	    case 38: return "Boundary element methods";
	    case 50: return "Mesh generation and refinement";
	    case 55: return "Multigrid methods; domain decomposition";
	    case 60: return "Finite elements, Rayleigh-Ritz and Galerkin methods, finite methods";
	    case 70: return "Spectral, collocation and related methods";
	    case 75: return "Probabilistic methods, particle methods, etc.";
	    case 80: return "Fundamental solutions, Green's function methods, etc.";
	    case 85: return "Fictitious domain methods";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'N': // Partial differential equations, boundary value problems
	  switch(min)
	    {
	    case  6: return "Finite difference methods";
	    case  8: return "Finite volume methods";
	    case 12: return "Stability and convergence of numerical methods";
	    case 15: return "Error bounds";
	    case 20: return "Ill-posed problems";
	    case 21: return "Inverse problems";
	    case 22: return "Solution of discretized equations";
	    case 25: return "Eigenvalue problems";
	    case 30: return "Finite elements, Rayleigh-Ritz and Galerkin methods, finite methods";
	    case 35: return "Spectral, collocation and related methods";
	    case 38: return "Boundary element methods";
	    case 40: return "Method of lines";
	    case 45: return "Method of contraction of the boundary";
	    case 50: return "Mesh generation and refinement";
	    case 55: return "Multigrid methods; domain decomposition";
	    case 75: return "Probabilistic methods, particle methods, etc.";
	    case 80: return "Fundamental solutions, Green's function methods, etc.";
	    case 85: return "Fictitious domain methods";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'P': // Numerical problems in dynamical systems
	  switch(min)
	    {
	    case 10: return "Hamiltonian systems including symplectic integrators";
	    case 20: return "Numerical chaos";
	    case 30: return "Bifurcation problems";
	    case 40: return "Nonlinear stabilities";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'Q': // Difference and functional equations, recurrence relations
	  switch(min)
	    {
	    case 10: return "Difference equations";
	    case 20: return "Functional equations";
	    case 30: return "Recurrence relations";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'R': // Integral equations, integral transforms
	  switch(min)
	    {
	    case 10: return "Integral transforms";
	    case 20: return "Integral equations";
	    case 30: return "Improperly posed problems";
	    case 32: return "Inverse problems";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'S': // Graphical methods
	  switch(min)
	    {
	    case  5: return "Graphical methods";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'T': // Numerical methods in Fourier analysis
	  switch(min)
	    {
	    case 40: return "Trigonometric approximation and interpolation";
	    case 50: return "Discrete and fast Fourier transforms";
	    case 60: return "Wavelets";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'Y': // Computer aspects of numerical algorithms
	  switch(min)
	    {
	    case  4: return "Algorithms for computer arithmetic, etc.";
	    case  5: return "Parallel computation";
	    case 10: return "Algorithms for specific classes of architectures";
	    case 15: return "Packaged methods";
	    case 20: return "Complexity and performance of numerical algorithms";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'Z': // Applications to physics
	  switch(min)
	    {
	    case  5: return "Applications to physics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 68: // Computer science
      switch (med)
	{
	case 'M': // Computer system organization
	  switch(min)
	    {
	    case  1: return "General";
	    case  7: return "Mathematical problems of computer architecture";
	    case 10: return "Network design and communication";
	    case 11: return "Internet topics";
	    case 12: return "Network protocols";
	    case 14: return "Distributed systems";
	    case 15: return "Reliability, testing and fault tolerance";
	    case 20: return "Performance evaluation; queueing; scheduling";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'N': // Software
	  switch(min)
	    {
	    case  1: return "General";
	    case 15: return "Programming languages";
	    case 17: return "Logic programming";
	    case 18: return "Functional programming and lambda calculus";
	    case 19: return "Other programming techniques (object-oriented, sequential, concurrent, automatic, etc.)";
	    case 20: return "Compilers and interpreters";
	    case 25: return "Operating systems";
	    case 30: return "Mathematical aspects of software engineering (specification, verification, metrics, requirements, etc.)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'P': // Theory of data
	  switch(min)
	    {
	    case  1: return "General";
	    case  5: return "Data structures";
	    case 10: return "Searching and sorting";
	    case 15: return "Database theory";
	    case 20: return "Information storage and retrieval";
	    case 25: return "Data encryption";
	    case 30: return "Coding and information theory (compaction, compression, models of communication, encoding schemes, etc.)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'Q': // Theory of computing
	  switch(min)
	    {
	    case  1: return "General";
	    case  5: return "Models of computation (Turing machines, etc.)";
	    case 10: return "Modes of computation (nondeterministic, parallel, interactive, probabilistic, etc.)";
	    case 12: return "Quantum algorithms and complexity";
	    case 15: return "Complexity classes (hierarchies, relations among complexity classes, etc.)";
	    case 17: return "Computational difficulty of problems (lower bounds, completeness, difficulty of approximation, etc.)";
	    case 19: return "Descriptive complexity and finite models";
	    case 25: return "Analysis of algorithms and problem complexity";
	    case 30: return "Algorithmic information theory (Kolmogorov complexity, etc.)";
	    case 32: return "Computational learning theory";
	    case 42: return "Grammars and rewriting systems";
	    case 45: return "Formal languages and automata";
	    case 55: return "Semantics";
	    case 60: return "Specification and verification (program logics, model checking, etc.)";
	    case 65: return "Abstract data types; algebraic specification";
	    case 70: return "Algebraic theory of languages and automata";
	    case 80: return "Cellular automata";
	    case 85: return "Models and methods for concurrent and distributed computing (process algebras, bisimulation, transition nets, etc.)";
	    case 87: return "Probability in computer science (algorithm analysis, random structures, phase transitions, etc.)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'R': // Discrete mathematics in relation to computer science
	  switch(min)
	    {
	    case  1: return "General";
	    case  5: return "Combinatorics";
	    case 10: return "Graph theory (including graph drawing)";
	    case 15: return "Combinatorics on words";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'T': // Artificial intelligence
	  switch(min)
	    {
	    case  1: return "General";
	    case  5: return "Learning and adaptive systems";
	    case 10: return "Pattern recognition, speech recognition";
	    case 15: return "Theorem proving (deduction, resolution, etc.)";
	    case 20: return "Problem solving (heuristics, search strategies, etc.)";
	    case 27: return "Logic in artificial intelligence";
	    case 30: return "Knowledge representation";
	    case 35: return "Languages and software systems (knowledge-based systems, expert systems, etc.)";
	    case 37: return "Reasoning under uncertainty";
	    case 40: return "Robotics";
	    case 42: return "Agent technology";
	    case 45: return "Machine vision and scene understanding";
	    case 50: return "Natural language processing";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'U': // Computing methodologies and applications
	  switch(min)
	    {
	    case  1: return "General";
	    case  5: return "Computer graphics; computational geometry";
	    case  7: return "Computer-aided design";
	    case 10: return "Image processing";
	    case 15: return "Text processing; mathematical typography";
	    case 20: return "Simulation";
	    case 35: return "Information systems (hypertext navigation, interfaces, decision support, etc.)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'W': // Algorithms
	  switch(min)
	    {
	    case  1: return "General";
	    case  5: return "Nonnumerical algorithms";
	    case 10: return "Parallel algorithms";
	    case 15: return "Distributed algorithms";
	    case 20: return "Randomized algorithms";
	    case 25: return "Approximation algorithms";
	    case 27: return "Online algorithms";
	    case 30: return "Symbolic computation and algebraic computation";
	    case 32: return "Algorithms on strings";
	    case 35: return "VLSI algorithms";
	    case 40: return "Analysis of algorithms";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 70: // Mechanics of particles and systems
      switch (med)
	{
	case 'A': // Axiomatics, foundations
	  switch(min)
	    {
	    case  5: return "Axiomatics, foundations";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Kinematics
	  switch(min)
	    {
	    case  5: return "Kinematics of a particle";
	    case 10: return "Kinematics of a rigid body";
	    case 15: return "Mechanisms, robots";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Statics
	  switch(min)
	    {
	    case 20: return "Statics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Dynamics of a rigid body and of multibody systems
	  switch(min)
	    {
	    case  5: return "Motion of the gyroscope";
	    case 15: return "Free motion of a rigid body";
	    case 17: return "Motion of a rigid body with a fixed point";
	    case 18: return "Motion of a rigid body in contact with a solid surface";
	    case 20: return "Perturbation methods for rigid body dynamics";
	    case 40: return "Integrable cases of motion";
	    case 45: return "Higher-dimensional generalizations";
	    case 50: return "Stability problems";
	    case 55: return "Dynamics of multibody systems";
	    case 60: return "Robot dynamics and control";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // Dynamics of a system of particles, including celestial mechanics
	  switch(min)
	    {
	    case  5: return "Two-body problems";
	    case  7: return "Three-body problems";
	    case 10: return "n-body problems";
	    case 15: return "Celestial mechanics";
	    case 16: return "Collisions in celestial mechanics, regularization";
	    case 17: return "Inverse problems";
	    case 20: return "Holonomic systems";
	    case 25: return "Nonholonomic systems";
	    case 35: return "Collision of rigid or pseudo-rigid bodies";
	    case 40: return "Problems with friction";
	    case 45: return "Infinite particle systems";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'G': // General models, approaches, and methods
	  switch(min)
	    {
	    case 10: return "Generalized coordinates; event, impulse-energy, configuration, state, or phase space";
	    case 40: return "Topological and differential-topological methods";
	    case 45: return "Differential-geometric methods (tensors, connections, symplectic, Poisson, contact, Riemannian, nonholonomic, etc.)";
	    case 55: return "Algebraic geometry methods";
	    case 60: return "Dynamical systems methods";
	    case 65: return "Symmetries, Lie-group and Lie-algebra methods";
	    case 70: return "Functional-analytic methods";
	    case 75: return "Variational methods";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'H': // Hamiltonian and Lagrangian mechanics
	  switch(min)
	    {
	    case  3: return "Lagrange's equations";
	    case  5: return "Hamilton's equations";
	    case  6: return "Completely integrable systems and methods of integration";
	    case  7: return "Nonintegrable systems";
	    case  8: return "Nearly integrable Hamiltonian systems, KAM theory";
	    case  9: return "Perturbation theories";
	    case 11: return "Adiabatic invariants";
	    case 12: return "Periodic and almost periodic solutions";
	    case 14: return "Stability problems";
	    case 15: return "Canonical and symplectic transformations";
	    case 20: return "Hamilton-Jacobi equations";
	    case 25: return "Hamilton's principle";
	    case 30: return "Other variational principles";
	    case 33: return "Symmetries and conservation laws, reverse symmetries, invariant manifolds and their bifurcations, reduction";
	    case 40: return "Relativistic dynamics";
	    case 45: return "Constrained dynamics, Dirac's theory of constraints";
	    case 50: return "Higher-order theories";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'J': // Linear vibration theory
	  switch(min)
	    {
	    case 10: return "Modal analysis";
	    case 25: return "Stability";
	    case 30: return "Free motions";
	    case 35: return "Forced motions";
	    case 40: return "Parametric resonances";
	    case 50: return "Systems arising from the discretization of structural vibration problems";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'K': // Nonlinear dynamics
	  switch(min)
	    {
	    case  5: return "Phase plane analysis, limit cycles";
	    case 20: return "Stability";
	    case 25: return "Free motions";
	    case 28: return "Parametric resonances";
	    case 30: return "Nonlinear resonances";
	    case 40: return "Forced motions";
	    case 42: return "Equilibria and periodic trajectories";
	    case 43: return "Quasi-periodic motions and invariant tori";
	    case 44: return "Homoclinic and heteroclinic trajectories";
	    case 45: return "Normal forms";
	    case 50: return "Bifurcations and instability";
	    case 55: return "Transition to stochasticity (chaotic behavior)";
	    case 60: return "General perturbation schemes";
	    case 65: return "Averaging of perturbations";
	    case 70: return "Systems with slow and fast motions";
	    case 75: return "Nonlinear modes";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'L': // Random vibrations
	  switch(min)
	    {
	    case  5: return "Random vibrations";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'M': // Orbital mechanics
	  switch(min)
	    {
	    case 20: return "Orbital mechanics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'P': // Variable mass, rockets
	  switch(min)
	    {
	    case  5: return "Variable mass, rockets";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'Q': // Control of mechanical systems
	  switch(min)
	    {
	    case  5: return "Control of mechanical systems";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'S': // Classical field theories
	  switch(min)
	    {
	    case  5: return "Lagrangian formalism and Hamiltonian formalism";
	    case 10: return "Symmetries and conservation laws";
	    case 15: return "Yang-Mills and other gauge theories";
	    case 20: return "More general nonquantum field theories";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 74: // Mechanics of deformable solids
      switch (med)
	{
	case 'A': // Generalities, axiomatics, foundations of continuum mechanics of solids
	  switch(min)
	    {
	    case  5: return "Kinematics of deformation";
	    case 10: return "Stress";
	    case 15: return "Thermodynamics";
	    case 20: return "Theory of constitutive functions";
	    case 25: return "Molecular, statistical, and kinetic theories";
	    case 30: return "Nonsimple materials";
	    case 35: return "Polar materials";
	    case 40: return "Random materials and composite materials";
	    case 45: return "Theories of fracture and damage";
	    case 50: return "Structured surfaces and interfaces, coexistent phases";
	    case 55: return "Theories of friction (tribology)";
	    case 60: return "Micromechanical theories";
	    case 65: return "Reactive materials";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Elastic materials
	  switch(min)
	    {
	    case  5: return "Classical linear elasticity";
	    case 10: return "Linear elasticity with initial stresses";
	    case 15: return "Equations linearized about a deformed state (small deformations superposed on large)";
	    case 20: return "Nonlinear elasticity";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Plastic materials, materials of stress-rate and internal-variable type
	  switch(min)
	    {
	    case  5: return "Small-strain, rate-independent theories (including rigid-plastic and elasto-plastic materials)";
	    case 10: return "Small-strain, rate-dependent theories (including theories of viscoplasticity)";
	    case 15: return "Large-strain, rate-independent theories (including nonlinear plasticity)";
	    case 20: return "Large-strain, rate-dependent theories";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Materials of strain-rate type and history type, other materials with memory (including elastic materials with viscous damping, various viscoelastic materials)
	  switch(min)
	    {
	    case  5: return "Linear constitutive equations";
	    case 10: return "Nonlinear constitutive equations";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Material properties given special treatment
	  switch(min)
	    {
	    case  5: return "Inhomogeneity";
	    case 10: return "Anisotropy";
	    case 15: return "Crystalline structure";
	    case 20: return "Granularity";
	    case 25: return "Texture";
	    case 30: return "Composite and mixture properties";
	    case 35: return "Random structure";
	    case 40: return "Chemical structure";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // Coupling of solid mechanics with other effects
	  switch(min)
	    {
	    case  5: return "Thermal effects";
	    case 10: return "Fluid-solid interactions (including aero- and hydro-elasticity, porosity, etc.)";
	    case 15: return "Electromagnetic effects";
	    case 20: return "Mixture effects";
	    case 25: return "Chemical and reactive effects";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'G': // Equilibrium (steady-state) problems
	  switch(min)
	    {
	    case  5: return "Explicit solutions";
	    case 10: return "Analytic approximation of solutions (perturbation methods, asymptotic methods, series, etc.)";
	    case 15: return "Numerical approximation of solutions";
	    case 20: return "Local existence of solutions (near a given solution)";
	    case 25: return "Global existence of solutions";
	    case 30: return "Uniqueness of solutions";
	    case 35: return "Multiplicity of solutions";
	    case 40: return "Regularity of solutions";
	    case 45: return "Bounds for solutions";
	    case 50: return "Saint-Venant's principle";
	    case 55: return "Qualitative behavior of solutions";
	    case 60: return "Bifurcation and buckling";
	    case 65: return "Energy minimization";
	    case 70: return "Stress concentrations, singularities";
	    case 75: return "Inverse problems";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'H': // Dynamical problems
	  switch(min)
	    {
	    case  5: return "Explicit solutions";
	    case 10: return "Analytic approximation of solutions (perturbation methods, asymptotic methods, series, etc.)";
	    case 15: return "Numerical approximation of solutions";
	    case 20: return "Existence of solutions";
	    case 25: return "Uniqueness of solutions";
	    case 30: return "Regularity of solutions";
	    case 35: return "Singularities, blowup, stress concentrations";
	    case 40: return "Long-time behavior of solutions";
	    case 45: return "Vibrations";
	    case 50: return "Random vibrations";
	    case 55: return "Stability";
	    case 60: return "Dynamical bifurcation";
	    case 65: return "Chaotic behavior";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'J': // Waves
	  switch(min)
	    {
	    case  5: return "Linear waves";
	    case 10: return "Bulk waves";
	    case 15: return "Surface waves";
	    case 20: return "Wave scattering";
	    case 25: return "Inverse problems";
	    case 30: return "Nonlinear waves";
	    case 35: return "Solitary waves";
	    case 40: return "Shocks and related discontinuities";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'K': // Thin bodies, structures
	  switch(min)
	    {
	    case  5: return "Strings";
	    case 10: return "Rods (beams, columns, shafts, arches, rings, etc.)";
	    case 15: return "Membranes";
	    case 20: return "Plates";
	    case 25: return "Shells";
	    case 30: return "Junctions";
	    case 35: return "Thin films";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'L': // Special subfields of solid mechanics
	  switch(min)
	    {
	    case  5: return "Geophysical solid mechanics";
	    case 10: return "Soil and rock mechanics";
	    case 15: return "Biomechanical solid mechanics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'M': // Special kinds of problems
	  switch(min)
	    {
	    case  5: return "Control, switches and devices (“smart materials”)";
	    case 10: return "Friction";
	    case 15: return "Contact";
	    case 20: return "Impact";
	    case 25: return "Micromechanics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'N': // Phase transformations in solids
	  switch(min)
	    {
	    case  5: return "Crystals";
	    case 10: return "Displacive transformations";
	    case 15: return "Analysis of microstructure";
	    case 20: return "Dynamics of phase boundaries";
	    case 25: return "Transformations involving diffusion";
	    case 30: return "Problems involving hysteresis";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'P': // Optimization
	  switch(min)
	    {
	    case  5: return "Compliance or weight optimization";
	    case 10: return "Optimization of other properties";
	    case 15: return "Topological methods";
	    case 20: return "Geometrical methods";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'Q': // Homogenization, determination of effective properties
	  switch(min)
	    {
	    case  5: return "Homogenization in equilibrium problems";
	    case 10: return "Homogenization and oscillations in dynamical problems";
	    case 15: return "Effective constitutive equations";
	    case 20: return "Bounds on effective properties";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'R': // Fracture and damage
	  switch(min)
	    {
	    case  5: return "Brittle damage";
	    case 10: return "Brittle fracture";
	    case 15: return "High-velocity fracture";
	    case 20: return "Anelastic fracture and damage";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'S': // Numerical methods
	  switch(min)
	    {
	    case  5: return "Finite element methods";
	    case 10: return "Finite volume methods";
	    case 15: return "Boundary element methods";
	    case 20: return "Finite difference methods";
	    case 25: return "Spectral and related methods";
	    case 30: return "Other numerical methods";
	    case 60: return "Stochastic methods";
	    case 70: return "Complex variable methods";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 76: // Fluid mechanics
      switch (med)
	{
	case 'A': // Foundations, constitutive equations, rheology
	  switch(min)
	    {
	    case  2: return "Foundations of fluid mechanics";
	    case  5: return "Non-Newtonian fluids";
	    case 10: return "Viscoelastic fluids";
	    case 15: return "Liquid crystals";
	    case 20: return "Thin fluid films";
	    case 25: return "Superfluids (classical aspects)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Incompressible inviscid fluids
	  switch(min)
	    {
	    case  3: return "Existence, uniqueness, and regularity theory";
	    case  7: return "Free-surface potential flows";
	    case 10: return "Jets and cavities, cavitation, free-streamline theory, water-entry problems, airfoil and hydrofoil theory, sloshing";
	    case 15: return "Water waves, gravity waves; dispersion and scattering, nonlinear interaction";
	    case 20: return "Ship waves";
	    case 25: return "Solitary waves";
	    case 45: return "Capillarity (surface tension)";
	    case 47: return "Vortex flows";
	    case 55: return "Internal waves";
	    case 60: return "Atmospheric waves";
	    case 65: return "Rossby waves";
	    case 70: return "Stratification effects in inviscid fluids";
	    case 75: return "Flow control and optimization";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Incompressible viscous fluids
	  switch(min)
	    {
	    case  3: return "Existence, uniqueness, and regularity theory";
	    case  5: return "Navier-Stokes equations";
	    case  6: return "Statistical solutions of Navier-Stokes and related equations";
	    case  7: return "Stokes and related (Oseen, etc.) flows";
	    case  8: return "Lubrication theory";
	    case  9: return "Viscous-inviscid interaction";
	    case 10: return "Boundary-layer theory, separation and reattachment, higher-order effects";
	    case 17: return "Viscous vortex flows";
	    case 25: return "Wakes and jets";
	    case 27: return "Other free-boundary flows; Hele-Shaw flows";
	    case 33: return "Waves";
	    case 45: return "Capillarity (surface tension)";
	    case 50: return "Stratification effects in viscous fluids";
	    case 55: return "Flow control and optimization";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Hydrodynamic stability
	  switch(min)
	    {
	    case  5: return "Parallel shear flows";
	    case  6: return "Convection";
	    case  7: return "Rotation";
	    case  9: return "Stability and instability of nonparallel flows";
	    case 15: return "Absolute and convective instability and stability";
	    case 17: return "Interfacial stability and instability";
	    case 19: return "Compressibility effects";
	    case 20: return "Stability and instability of geophysical and astrophysical flows";
	    case 25: return "Stability and instability of magnetohydrodynamic and electrohydrodynamic flows";
	    case 30: return "Nonlinear effects";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // Turbulence
	  switch(min)
	    {
	    case  2: return "Fundamentals";
	    case  5: return "Isotropic turbulence; homogeneous turbulence";
	    case  6: return "Transition to turbulence";
	    case 10: return "Shear flows";
	    case 20: return "Dynamical systems approach to turbulence";
	    case 25: return "Turbulent transport, mixing";
	    case 30: return "Renormalization and other field-theoretical methods";
	    case 35: return "Convective turbulence";
	    case 40: return "Turbulent boundary layers";
	    case 45: return "Stratification effects";
	    case 50: return "Compressibility effects";
	    case 55: return "Statistical turbulence modeling";
	    case 60: return "k-ɛ modeling";
	    case 65: return "Direct numerical and large eddy simulation of turbulence";
	    case 70: return "Control of turbulent flows";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'G': // General aerodynamics and subsonic flows
	  switch(min)
	    {
	    case 25: return "General aerodynamics and subsonic flows";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'H': // Transonic flows
	  switch(min)
	    {
	    case  5: return "Transonic flows";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'J': // Supersonic flows
	  switch(min)
	    {
	    case 20: return "Supersonic flows";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'K': // Hypersonic flows
	  switch(min)
	    {
	    case  5: return "Hypersonic flows";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'L': // Shock waves and blast waves
	  switch(min)
	    {
	    case  5: return "Shock waves and blast waves";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'M': // Basic methods in fluid mechanics
	  switch(min)
	    {
	    case 10: return "Finite element methods";
	    case 12: return "Finite volume methods";
	    case 15: return "Boundary element methods";
	    case 20: return "Finite difference methods";
	    case 22: return "Spectral methods";
	    case 23: return "Vortex methods";
	    case 25: return "Other numerical methods";
	    case 27: return "Visualization algorithms";
	    case 28: return "Particle methods and lattice-gas methods";
	    case 30: return "Variational methods";
	    case 35: return "Stochastic analysis";
	    case 40: return "Complex-variables methods";
	    case 45: return "Asymptotic methods, singular perturbations";
	    case 50: return "Homogenization";
	    case 55: return "Dimensional analysis and similarity";
	    case 60: return "Symmetry analysis, Lie group and algebra methods";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'N': // Compressible fluids and gas dynamics, general
	  switch(min)
	    {
	    case 10: return "Existence, uniqueness, and regularity theory";
	    case 15: return "Gas dynamics, general";
	    case 17: return "Viscous-inviscid interaction";
	    case 20: return "Boundary-layer theory";
	    case 25: return "Flow control and optimization";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'P': // Rarefied gas flows, Boltzmann equation
	  switch(min)
	    {
	    case  5: return "Rarefied gas flows, Boltzmann equation";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'Q': // Hydro- and aero-acoustics
	  switch(min)
	    {
	    case  5: return "Hydro- and aero-acoustics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'R': // Diffusion and convection
	  switch(min)
	    {
	    case  5: return "Forced convection";
	    case 10: return "Free convection";
	    case 50: return "Diffusion";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'S': // Flows in porous media; filtration; seepage
	  switch(min)
	    {
	    case  5: return "Flows in porous media; filtration; seepage";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'T': // Two-phase and multiphase flows
	  switch(min)
	    {
	    case 10: return "Liquid-gas two-phase flows, bubbly flows";
	    case 15: return "Dusty-gas two-phase flows";
	    case 20: return "Suspensions";
	    case 25: return "Granular flows";
	    case 30: return "Three or more component flows";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'U': // Rotating fluids
	  switch(min)
	    {
	    case  5: return "Rotating fluids";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'V': // Reaction effects in flows
	  switch(min)
	    {
	    case  5: return "Reaction effects in flows";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'W': // Magnetohydrodynamics and electrohydrodynamics
	  switch(min)
	    {
	    case  5: return "Magnetohydrodynamics and electrohydrodynamics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'X': // Ionized gas flow in electromagnetic fields; plasmic flow
	  switch(min)
	    {
	    case  5: return "Ionized gas flow in electromagnetic fields; plasmic flow";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'Y': // Quantum hydrodynamics and relativistic hydrodynamics
	  switch(min)
	    {
	    case  5: return "Quantum hydrodynamics and relativistic hydrodynamics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'Z': // Biological fluid mechanics
	  switch(min)
	    {
	    case  5: return "Physiological flows";
	    case 10: return "Biopropulsion in water and in air";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 78: // Optics, electromagnetic theory
      switch (med)
	{
	case 'A': // General
	  switch(min)
	    {
	    case  2: return "Foundations";
	    case  5: return "Geometric optics";
	    case 10: return "Physical optics";
	    case 15: return "Electron optics";
	    case 20: return "Space charge waves";
	    case 25: return "Electromagnetic theory, general";
	    case 30: return "Electro- and magnetostatics";
	    case 35: return "Motion of charged particles";
	    case 37: return "Ion traps";
	    case 40: return "Waves and radiation";
	    case 45: return "Diffraction, scattering";
	    case 46: return "Inverse scattering problems";
	    case 48: return "Composite media; random media";
	    case 50: return "Antennas, wave-guides";
	    case 55: return "Technical applications";
	    case 57: return "Electrochemistry";
	    case 60: return "Lasers, masers, optical bistability, nonlinear optics";
	    case 70: return "Biological applications";
	    case 97: return "Mathematically heuristic optics and electromagnetic theory (must also be assigned at least one other classification number in this section)";
	    case 99: return "Miscellaneous topics";
	    default: return "Subcategory not implemented";
	    }
	case 'M': // Basic methods
	  switch(min)
	    {
	    case  5: return "Method of moments";
	    case 10: return "Finite element methods";
	    case 12: return "Finite volume methods, finite integration techniques";
	    case 15: return "Boundary element methods";
	    case 16: return "Multipole methods";
	    case 20: return "Finite difference methods";
	    case 22: return "Spectral methods";
	    case 25: return "Other numerical methods";
	    case 30: return "Variational methods";
	    case 31: return "Monte Carlo methods";
	    case 32: return "Neural and heuristic methods";
	    case 34: return "Model reduction";
	    case 35: return "Asymptotic analysis";
	    case 40: return "Homogenization";
	    case 50: return "Optimization";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 80: // Classical thermodynamics, heat transfer
      switch (med)
	{
	case 'A': // Thermodynamics and heat transfer
	  switch(min)
	    {
	    case  5: return "Foundations";
	    case 10: return "Classical thermodynamics, including relativistic";
	    case 17: return "Thermodynamics of continua";
	    case 20: return "Heat and mass transfer, heat flow";
	    case 22: return "Stefan problems, phase changes, etc.";
	    case 23: return "Inverse problems";
	    case 25: return "Combustion";
	    case 30: return "Chemical kinetics";
	    case 32: return "Chemically reacting flows";
	    case 50: return "Chemistry (general)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'M': // Basic methods
	  switch(min)
	    {
	    case 10: return "Finite element methods";
	    case 12: return "Finite volume methods";
	    case 15: return "Boundary element methods";
	    case 20: return "Finite difference methods";
	    case 22: return "Spectral methods";
	    case 25: return "Other numerical methods";
	    case 30: return "Variational methods";
	    case 31: return "Monte Carlo methods";
	    case 35: return "Asymptotic analysis";
	    case 40: return "Homogenization";
	    case 50: return "Optimization";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 81: // Quantum theory
      switch (med)
	{
	case 'P': // Axiomatics, foundations, philosophy
	  switch(min)
	    {
	    case  5: return "General and philosophical";
	    case 10: return "Logical foundations of quantum mechanics; quantum logic";
	    case 13: return "Contextuality";
	    case 15: return "Quantum measurement theory";
	    case 16: return "Quantum state spaces, operational and probabilistic concepts";
	    case 20: return "Stochastic mechanics (including stochastic electrodynamics)";
	    case 40: return "Quantum coherence, entanglement, quantum correlations";
	    case 45: return "Quantum information, communication, networks";
	    case 50: return "Quantum state estimation, approximate cloning";
	    case 68: return "Quantum computation";
	    case 70: return "Quantum coding (general)";
	    case 94: return "Quantum cryptography";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'Q': // General mathematical topics and methods in quantum theory
	  switch(min)
	    {
	    case  5: return "Closed and approximate solutions to the Schrödinger, Dirac, Klein-Gordon and other equations of quantum mechanics";
	    case 10: return "Selfadjoint operator theory in quantum theory, including spectral analysis";
	    case 12: return "Non-selfadjoint operator theory in quantum theory";
	    case 15: return "Perturbation theories for operators and differential equations";
	    case 20: return "Semiclassical techniques, including WKB and Maslov methods";
	    case 30: return "Feynman integrals and graphs; applications of algebraic topology and algebraic geometry";
	    case 35: return "Quantum mechanics on special spaces: manifolds, fractals, graphs, etc.";
	    case 37: return "Quantum dots, waveguides, ratchets, etc.";
	    case 40: return "Bethe-Salpeter and other integral equations";
	    case 50: return "Quantum chaos";
	    case 60: return "Supersymmetry and quantum mechanics";
	    case 65: return "Alternative quantum mechanics";
	    case 70: return "Differential-geometric methods, including holonomy, Berry and Hannay phases, etc.";
	    case 80: return "Special quantum systems, such as solvable systems";
	    case 93: return "Quantum control";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'R': // Groups and algebras in quantum theory
	  switch(min)
	    {
	    case  5: return "Finite-dimensional groups and algebras motivated by physics and their representations";
	    case 10: return "Infinite-dimensional groups and algebras motivated by physics, including Virasoro, Kac-Moody, W-algebras and other current algebras and their representations";
	    case 12: return "Relations with integrable systems";
	    case 15: return "Operator algebra methods";
	    case 20: return "Covariant wave equations";
	    case 25: return "Spinor and twistor methods";
	    case 30: return "Coherent states";
	    case 40: return "Symmetry breaking";
	    case 50: return "Quantum groups and related algebraic methods";
	    case 60: return "Noncommutative geometry";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'S': // General quantum mechanics and problems of quantization
	  switch(min)
	    {
	    case  5: return "Canonical quantization, commutation relations and statistics";
	    case 10: return "Geometry and quantization, symplectic methods";
	    case 20: return "Stochastic quantization";
	    case 22: return "Open systems, reduced dynamics, master equations, decoherence";
	    case 25: return "Quantum stochastic calculus";
	    case 30: return "Phase-space methods including Wigner distributions, etc.";
	    case 40: return "Path integrals";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'T': // Quantum field theory; related classical field theories
	  switch(min)
	    {
	    case  5: return "Axiomatic quantum field theory; operator algebras";
	    case  8: return "Constructive quantum field theory";
	    case 10: return "Model quantum field theories";
	    case 13: return "Yang-Mills and other gauge theories";
	    case 15: return "Perturbative methods of renormalization";
	    case 16: return "Nonperturbative methods of renormalization";
	    case 17: return "Renormalization group methods";
	    case 18: return "Feynman diagrams";
	    case 20: return "Quantum field theory on curved space backgrounds";
	    case 25: return "Quantum field theory on lattices";
	    case 27: return "Continuum limits";
	    case 28: return "Thermal quantum field theory";
	    case 30: return "String and superstring theories; other extended objects (e.g., branes)";
	    case 40: return "Two-dimensional field theories, conformal field theories, etc.";
	    case 45: return "Topological field theories";
	    case 50: return "Anomalies";
	    case 55: return "Casimir effect";
	    case 60: return "Supersymmetric field theories";
	    case 70: return "Quantization in field theory; cohomological methods";
	    case 75: return "Noncommutative geometry methods";
	    case 80: return "Simulation and numerical modeling";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'U': // Scattering theory
	  switch(min)
	    {
	    case  5: return "2-body potential scattering theory";
	    case 10: return "n-body potential scattering theory";
	    case 15: return "Exactly and quasi-solvable systems";
	    case 20: return "S-matrix theory, etc.";
	    case 30: return "Dispersion theory, dispersion relations";
	    case 35: return "Inelastic and multichannel scattering";
	    case 40: return "Inverse scattering problems";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'V': // Applications to specific physical systems
	  switch(min)
	    {
	    case  5: return "Strong interaction, including quantum chromodynamics";
	    case 10: return "Electromagnetic interaction; quantum electrodynamics";
	    case 15: return "Weak interaction";
	    case 17: return "Gravitational interaction";
	    case 19: return "Other fundamental interactions";
	    case 22: return "Unified theories";
	    case 25: return "Other elementary particle theory";
	    case 35: return "Nuclear physics";
	    case 45: return "Atomic physics";
	    case 55: return "Molecular physics";
	    case 65: return "Quantum dots";
	    case 70: return "Many-body theory; quantum Hall effect";
	    case 80: return "Quantum optics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 82: // Statistical mechanics, structure of matter
      switch (med)
	{
	case 'B': // Equilibrium statistical mechanics
	  switch(min)
	    {
	    case  3: return "Foundations";
	    case  5: return "Classical equilibrium statistical mechanics (general)";
	    case 10: return "Quantum equilibrium statistical mechanics (general)";
	    case 20: return "Lattice systems (Ising, dimer, Potts, etc.) and systems on graphs";
	    case 21: return "Continuum models (systems of particles, etc.)";
	    case 23: return "Exactly solvable models; Bethe ansatz";
	    case 24: return "Interface problems; diffusion-limited aggregation";
	    case 26: return "Phase transitions (general)";
	    case 27: return "Critical phenomena";
	    case 28: return "Renormalization group methods";
	    case 30: return "Statistical thermodynamics";
	    case 31: return "Stochastic methods";
	    case 35: return "Irreversible thermodynamics, including Onsager-Machlup theory";
	    case 40: return "Kinetic theory of gases";
	    case 41: return "Random walks, random surfaces, lattice animals, etc.";
	    case 43: return "Percolation";
	    case 44: return "Disordered systems (random Ising models, random Schrödinger operators, etc.)";
	    case 80: return "Numerical methods (Monte Carlo, series resummation, etc.)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Time-dependent statistical mechanics (dynamic and nonequilibrium)
	  switch(min)
	    {
	    case  3: return "Foundations";
	    case  5: return "Classical dynamic and nonequilibrium statistical mechanics (general)";
	    case 10: return "Quantum dynamics and nonequilibrium statistical mechanics (general)";
	    case 20: return "Dynamic lattice systems (kinetic Ising, etc.) and systems on graphs";
	    case 21: return "Dynamic continuum models (systems of particles, etc.)";
	    case 22: return "Interacting particle systems";
	    case 23: return "Exactly solvable dynamic models";
	    case 24: return "Interface problems; diffusion-limited aggregation";
	    case 26: return "Dynamic and nonequilibrium phase transitions (general)";
	    case 27: return "Dynamic critical phenomena";
	    case 28: return "Dynamic renormalization group methods";
	    case 31: return "Stochastic methods (Fokker-Planck, Langevin, etc.)";
	    case 32: return "Neural nets";
	    case 35: return "Irreversible thermodynamics, including Onsager-Machlup theory";
	    case 40: return "Kinetic theory of gases";
	    case 41: return "Dynamics of random walks, random surfaces, lattice animals, etc.";
	    case 43: return "Time-dependent percolation";
	    case 44: return "Dynamics of disordered systems (random Ising systems, etc.)";
	    case 70: return "Transport processes";
	    case 80: return "Numerical methods (Monte Carlo, series resummation, etc.)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Applications to specific types of physical systems
	  switch(min)
	    {
	    case  5: return "Gases";
	    case 10: return "Plasmas";
	    case 15: return "Liquids";
	    case 20: return "Solids";
	    case 25: return "Crystals";
	    case 30: return "Random media, disordered materials (including liquid crystals and spin glasses)";
	    case 35: return "Metals";
	    case 37: return "Semiconductors";
	    case 40: return "Magnetic materials";
	    case 45: return "Ferroelectrics";
	    case 50: return "Superfluids";
	    case 55: return "Superconductors";
	    case 60: return "Polymers";
	    case 75: return "Nuclear reactor theory; neutron transport";
	    case 77: return "Quantum wave guides, quantum wires";
	    case 80: return "Nanostructures and nanoparticles";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 83: // Relativity and gravitational theory
      switch (med)
	{
	case 'A': // Special relativity
	  switch(min)
	    {
	    case  5: return "Special relativity";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Observational and experimental questions
	  switch(min)
	    {
	    case  5: return "Observational and experimental questions";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // General relativity
	  switch(min)
	    {
	    case  5: return "Einstein's equations (general structure, canonical formalism, Cauchy problems)";
	    case 10: return "Equations of motion";
	    case 15: return "Exact solutions";
	    case 20: return "Classes of solutions; algebraically special solutions, metrics with symmetries";
	    case 22: return "Einstein-Maxwell equations";
	    case 25: return "Approximation procedures, weak fields";
	    case 27: return "Lattice gravity, Regge calculus and other discrete methods";
	    case 30: return "Asymptotic procedures (radiation, news functions, ℋ-spaces, etc.)";
	    case 35: return "Gravitational waves";
	    case 40: return "Gravitational energy and conservation laws; groups of motions";
	    case 45: return "Quantization of the gravitational field";
	    case 47: return "Methods of quantum field theory";
	    case 50: return "Electromagnetic fields";
	    case 55: return "Macroscopic interaction of the gravitational field with matter (hydrodynamics, etc.)";
	    case 57: return "Black holes";
	    case 60: return "Spinor and twistor methods; Newman-Penrose formalism";
	    case 65: return "Methods of noncommutative geometry";
	    case 75: return "Space-time singularities, cosmic censorship, etc.";
	    case 80: return "Analogues in lower dimensions";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Relativistic gravitational theories other than Einstein's, including asymmetric field theories
	  switch(min)
	    {
	    case  5: return "Relativistic gravitational theories other than Einstein's, including asymmetric field theories";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Unified, higher-dimensional and super field theories
	  switch(min)
	    {
	    case  5: return "Geometrodynamics";
	    case 15: return "Kaluza-Klein and other higher-dimensional theories";
	    case 30: return "String and superstring theories";
	    case 50: return "Supergravity";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // Cosmology
	  switch(min)
	    {
	    case  5: return "Cosmology";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 85: // Astronomy and astrophysics
      switch (med)
	{
	case 'A': // Astronomy and astrophysics
	  switch(min)
	    {
	    case  4: return "General";
	    case  5: return "Galactic and stellar dynamics";
	    case 15: return "Galactic and stellar structure";
	    case 20: return "Planetary atmospheres";
	    case 25: return "Radiative transfer";
	    case 30: return "Hydrodynamic and hydromagnetic problems";
	    case 35: return "Statistical astronomy";
	    case 40: return "Cosmology";
	    case 99: return "Miscellaneous topics";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 86: // Geophysics
      switch (med)
	{
	case 'A': // Geophysics
	  switch(min)
	    {
	    case  4: return "General";
	    case  5: return "Hydrology, hydrography, oceanography";
	    case 10: return "Meteorology and atmospheric physics";
	    case 15: return "Seismology";
	    case 17: return "Global dynamics, earthquake problems";
	    case 20: return "Potentials, prospecting";
	    case 22: return "Inverse problems";
	    case 25: return "Geo-electricity and geomagnetism";
	    case 30: return "Geodesy, mapping problems";
	    case 32: return "Geostatistics";
	    case 40: return "Glaciology";
	    case 60: return "Geological problems";
	    case 99: return "Miscellaneous topics";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 90: // Operations research, mathematical programming
      switch (med)
	{
	case 'B': // Operations research and management science
	  switch(min)
	    {
	    case  5: return "Inventory, storage, reservoirs";
	    case  6: return "Transportation, logistics";
	    case 10: return "Network models, deterministic";
	    case 15: return "Network models, stochastic";
	    case 18: return "Communication networks";
	    case 20: return "Traffic problems";
	    case 22: return "Queues and service";
	    case 25: return "Reliability, availability, maintenance, inspection";
	    case 30: return "Production models";
	    case 35: return "Scheduling theory, deterministic";
	    case 36: return "Scheduling theory, stochastic";
	    case 40: return "Search theory";
	    case 50: return "Management decision making, including multiple objectives";
	    case 60: return "Marketing, advertising";
	    case 70: return "Theory of organizations, manpower planning";
	    case 80: return "Discrete location and assignment";
	    case 85: return "Continuous location";
	    case 90: return "Case-oriented studies";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Mathematical programming
	  switch(min)
	    {
	    case  5: return "Linear programming";
	    case  6: return "Large-scale problems";
	    case  8: return "Special problems of linear programming (transportation, multi-index, etc.)";
	    case  9: return "Boolean programming";
	    case 10: return "Integer programming";
	    case 11: return "Mixed integer programming";
	    case 15: return "Stochastic programming";
	    case 20: return "Quadratic programming";
	    case 22: return "Semidefinite programming";
	    case 25: return "Convex programming";
	    case 26: return "Nonconvex programming, global optimization";
	    case 27: return "Combinatorial optimization";
	    case 29: return "Multi-objective and goal programming";
	    case 30: return "Nonlinear programming";
	    case 31: return "Sensitivity, stability, parametric optimization";
	    case 32: return "Fractional programming";
	    case 33: return "Complementarity and equilibrium problems and variational inequalities (finite dimensions)";
	    case 34: return "Semi-infinite programming";
	    case 35: return "Programming involving graphs or networks";
	    case 39: return "Dynamic programming";
	    case 40: return "Markov and semi-Markov decision processes";
	    case 46: return "Optimality conditions, duality";
	    case 47: return "Minimax problems";
	    case 48: return "Programming in abstract spaces";
	    case 49: return "Extreme-point and pivoting methods";
	    case 51: return "Interior-point methods";
	    case 52: return "Methods of reduced gradient type";
	    case 53: return "Methods of quasi-Newton type";
	    case 55: return "Methods of successive quadratic programming type";
	    case 56: return "Derivative-free methods and methods using generalized derivatives";
	    case 57: return "Polyhedral combinatorics, branch-and-bound, branch-and-cut";
	    case 59: return "Approximation methods and heuristics";
	    case 60: return "Abstract computational complexity for mathematical programming problems";
	    case 70: return "Fuzzy programming";
	    case 90: return "Applications of mathematical programming";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 91: // Game theory, economics, social and behavioral sciences
      switch (med)
	{
	case 'A': // Game theory
	  switch(min)
	    {
	    case  5: return "2-person games";
	    case  6: return "n-person games, n>2";
	    case 10: return "Noncooperative games";
	    case 12: return "Cooperative games";
	    case 13: return "Games with infinitely many players";
	    case 15: return "Stochastic games";
	    case 18: return "Games in extensive form";
	    case 20: return "Multistage and repeated games";
	    case 22: return "Evolutionary games";
	    case 23: return "Differential games";
	    case 24: return "Positional games (pursuit and evasion, etc.)";
	    case 25: return "Dynamic games";
	    case 26: return "Rationality, learning";
	    case 28: return "Signaling, communication";
	    case 30: return "Utility theory for games";
	    case 35: return "Decision theory for games";
	    case 40: return "Game-theoretic models";
	    case 43: return "Games involving graphs";
	    case 44: return "Games involving topology or set theory";
	    case 46: return "Combinatorial games";
	    case 50: return "Discrete-time games";
	    case 55: return "Games of timing";
	    case 60: return "Probabilistic games; gambling";
	    case 65: return "Hierarchical games";
	    case 70: return "Spaces of games";
	    case 80: return "Applications of game theory";
	    case 90: return "Experimental studies";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Mathematical economics
	  switch(min)
	    {
	    case  2: return "Fundamental topics (basic mathematics, methodology; applicable to economics in general)";
	    case  6: return "Decision theory";
	    case  8: return "Individual preferences";
	    case 10: return "Group preferences";
	    case 12: return "Voting theory";
	    case 14: return "Social choice";
	    case 15: return "Welfare economics";
	    case 16: return "Utility theory";
	    case 18: return "Public goods";
	    case 24: return "Price theory and market structure";
	    case 25: return "Asset pricing models";
	    case 26: return "Market models (auctions, bargaining, bidding, selling, etc.)";
	    case 30: return "Risk theory, insurance";
	    case 32: return "Resource and cost allocation";
	    case 38: return "Production theory, theory of the firm";
	    case 40: return "Labor market, contracts";
	    case 42: return "Consumer behavior, demand theory";
	    case 44: return "Informational economics";
	    case 50: return "General equilibrium theory";
	    case 51: return "Dynamic stochastic general equilibrium theory";
	    case 52: return "Special types of equilibria";
	    case 54: return "Special types of economies";
	    case 55: return "Economic dynamics";
	    case 60: return "Trade models";
	    case 62: return "Growth models";
	    case 64: return "Macro-economic models (monetary models, models of taxation)";
	    case 66: return "Multisectoral models";
	    case 68: return "Matching models";
	    case 69: return "Heterogeneous agent models";
	    case 70: return "Stochastic models";
	    case 72: return "Spatial models";
	    case 74: return "Models of real-world systems";
	    case 76: return "Environmental economics (natural resource models, harvesting, pollution, etc.)";
	    case 80: return "Applications of statistical and quantum mechanics to economics (econophysics)";
	    case 82: return "Statistical methods; economic indices and measures";
	    case 84: return "Economic time series analysis";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Social and behavioral sciences: general topics
	  switch(min)
	    {
	    case  5: return "Measurement theory";
	    case 15: return "One- and multidimensional scaling";
	    case 20: return "Clustering";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Mathematical sociology (including anthropology)
	  switch(min)
	    {
	    case 10: return "Models of societies, social and urban evolution";
	    case 20: return "Mathematical geography and demography";
	    case 25: return "Spatial models";
	    case 30: return "Social networks";
	    case 35: return "Manpower systems";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Mathematical psychology
	  switch(min)
	    {
	    case 10: return "Cognitive psychology";
	    case 30: return "Psychophysics and psychophysiology; perception";
	    case 40: return "Memory and learning";
	    case 45: return "Measurement and performance";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // Other social and behavioral sciences (mathematical treatment)
	  switch(min)
	    {
	    case 10: return "History, political science";
	    case 20: return "Linguistics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'G': // Mathematical finance
	  switch(min)
	    {
	    case 10: return "Portfolio theory";
	    case 20: return "Derivative securities";
	    case 30: return "Interest rates (stochastic models)";
	    case 40: return "Credit risk";
	    case 50: return "Corporate finance";
	    case 60: return "Numerical methods (including Monte Carlo methods)";
	    case 70: return "Statistical methods, econometrics";
	    case 80: return "Financial applications of other theories (stochastic control, calculus of variations, PDE, SPDE, dynamical systems)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 92: // Biology and other natural sciences
      switch (med)
	{
	case 'B': // Mathematical biology in general
	  switch(min)
	    {
	    case  5: return "General biology and biomathematics";
	    case 10: return "Taxonomy, cladistics, statistics";
	    case 15: return "General biostatistics";
	    case 20: return "Neural networks, artificial life and related topics";
	    case 25: return "Biological rhythms and synchronization";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Physiological, cellular and medical topics
	  switch(min)
	    {
	    case  5: return "Biophysics";
	    case 10: return "Biomechanics";
	    case 15: return "Developmental biology, pattern formation";
	    case 17: return "Cell movement (chemotaxis, etc.)";
	    case 20: return "Neural biology";
	    case 30: return "Physiology (general)";
	    case 35: return "Physiological flow";
	    case 37: return "Cell biology";
	    case 40: return "Biochemistry, molecular biology";
	    case 42: return "Systems biology, networks";
	    case 45: return "Kinetics in biochemical problems (pharmacokinetics, enzyme kinetics, etc.)";
	    case 50: return "Medical applications (general)";
	    case 55: return "Biomedical imaging and signal processing";
	    case 60: return "Medical epidemiology";
	    case 80: return "Plant biology";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Genetics and population dynamics
	  switch(min)
	    {
	    case 10: return "Genetics";
	    case 15: return "Problems related to evolution";
	    case 20: return "Protein sequences, DNA sequences";
	    case 25: return "Population dynamics (general)";
	    case 30: return "Epidemiology";
	    case 40: return "Ecology";
	    case 50: return "Animal behavior";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Chemistry
	  switch(min)
	    {
	    case 10: return "Molecular structure (graph-theoretic methods, methods of differential topology, etc.)";
	    case 20: return "Classical flows, reactions, etc.";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // Other natural sciences
	  switch(min)
	    {
	    case  5: return "Other natural sciences";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 93: // Systems theory; control
      switch (med)
	{
	case 'A': // General
	  switch(min)
	    {
	    case  5: return "Axiomatic system theory";
	    case 10: return "General systems";
	    case 13: return "Hierarchical systems";
	    case 14: return "Decentralized systems";
	    case 15: return "Large scale systems";
	    case 30: return "Mathematical modeling (models of systems, model-matching, etc.)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Controllability, observability, and system structure
	  switch(min)
	    {
	    case  3: return "Attainable sets";
	    case  5: return "Controllability";
	    case  7: return "Observability";
	    case 10: return "Canonical structure";
	    case 11: return "System structure simplification";
	    case 12: return "Variable structure systems";
	    case 15: return "Realizations from input-output data";
	    case 17: return "Transformations";
	    case 18: return "Linearizations";
	    case 20: return "Minimal systems representations";
	    case 25: return "Algebraic methods";
	    case 27: return "Geometric methods";
	    case 28: return "Operator-theoretic methods";
	    case 30: return "System identification";
	    case 35: return "Sensitivity (robustness)";
	    case 36: return "H∞-control";
	    case 40: return "Computational methods";
	    case 50: return "Synthesis problems";
	    case 51: return "Design techniques (robust design, computer-aided design, etc.)";
	    case 52: return "Feedback control";
	    case 55: return "Pole and zero placement problems";
	    case 60: return "Eigenvalue problems";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Control systems
	  switch(min)
	    {
	    case  5: return "Linear systems";
	    case 10: return "Nonlinear systems";
	    case 15: return "Systems governed by ordinary differential equations";
	    case 20: return "Systems governed by partial differential equations";
	    case 23: return "Systems governed by functional-differential equations";
	    case 25: return "Systems in abstract spaces";
	    case 30: return "Systems governed by functional relations other than differential equations (such as hybrid and switching systems)";
	    case 35: return "Multivariable systems";
	    case 40: return "Adaptive control";
	    case 41: return "Problems with incomplete information";
	    case 42: return "Fuzzy control systems";
	    case 55: return "Discrete-time systems";
	    case 57: return "Sampled-data systems";
	    case 62: return "Digital systems";
	    case 65: return "Discrete event systems";
	    case 70: return "Time-scale analysis and singular perturbations";
	    case 73: return "Perturbations";
	    case 80: return "Frequency-response methods";
	    case 83: return "Control problems involving computers (process control, etc.)";
	    case 85: return "Automated systems (robots, etc.)";
	    case 95: return "Applications";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Stability
	  switch(min)
	    {
	    case  5: return "Lyapunov and other classical stabilities (Lagrange, Poisson, L^p,l^p, etc.)";
	    case  9: return "Robust stability";
	    case 10: return "Popov-type stability of feedback systems";
	    case 15: return "Stabilization of systems by feedback";
	    case 20: return "Asymptotic stability";
	    case 21: return "Adaptive or robust stabilization";
	    case 25: return "Input-output approaches";
	    case 30: return "Scalar and vector Lyapunov functions";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Stochastic systems and control
	  switch(min)
	    {
	    case  3: return "Stochastic systems, general";
	    case 10: return "Estimation and detection";
	    case 11: return "Filtering";
	    case 12: return "System identification";
	    case 14: return "Data smoothing";
	    case 15: return "Stochastic stability";
	    case 20: return "Optimal stochastic control";
	    case 24: return "Least squares and related methods";
	    case 25: return "Other computational methods";
	    case 35: return "Stochastic learning and adaptive control";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 94: // Information and communication, circuits
      switch (med)
	{
	case 'A': // Communication, information
	  switch(min)
	    {
	    case  5: return "Communication theory";
	    case  8: return "Image processing (compression, reconstruction, etc.)";
	    case 11: return "Application of orthogonal and other special functions";
	    case 12: return "Signal theory (characterization, reconstruction, filtering, etc.)";
	    case 13: return "Detection theory";
	    case 14: return "Modulation and demodulation";
	    case 15: return "Information theory, general";
	    case 17: return "Measures of information, entropy";
	    case 20: return "Sampling theory";
	    case 24: return "Coding theorems (Shannon theory)";
	    case 29: return "Source coding";
	    case 34: return "Rate-distortion theory";
	    case 40: return "Channel models (including quantum)";
	    case 45: return "Prefix, length-variable, comma-free codes";
	    case 50: return "Theory of questionnaires";
	    case 55: return "Shift register sequences and sequences over finite alphabets";
	    case 60: return "Cryptography";
	    case 62: return "Authentication and secret sharing";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Theory of error-correcting codes and error-detecting codes
	  switch(min)
	    {
	    case  5: return "Linear codes, general";
	    case 10: return "Convolutional codes";
	    case 12: return "Combined modulation schemes (including trellis codes)";
	    case 15: return "Cyclic codes";
	    case 20: return "Burst-correcting codes";
	    case 25: return "Combinatorial codes";
	    case 27: return "Geometric methods (including applications of algebraic geometry)";
	    case 30: return "Majority codes";
	    case 35: return "Decoding";
	    case 40: return "Arithmetic codes";
	    case 50: return "Synchronization error-correcting codes";
	    case 60: return "Other types of codes";
	    case 65: return "Bounds on codes";
	    case 70: return "Error probability";
	    case 75: return "Applications of the theory of convex sets and geometry of numbers (covering radius, etc.)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Circuits, networks
	  switch(min)
	    {
	    case  5: return "Analytic circuit theory";
	    case 10: return "Switching theory, application of Boolean algebra; Boolean functions";
	    case 12: return "Fault detection; testing";
	    case 15: return "Applications of graph theory";
	    case 30: return "Applications of design theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Fuzzy sets and logic (in connection with questions of Section 94)
	  switch(min)
	    {
	    case  5: return "Fuzzy sets and logic (in connection with questions of Section 94)";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    case 97: // Mathematics education
      switch (med)
	{
	case 'A': // General, mathematics and education
	  switch(min)
	    {
	    case 10: return "Comprehensive works, reference books";
	    case 20: return "Recreational mathematics, games";
	    case 30: return "History of mathematics and mathematics education";
	    case 40: return "Mathematics and society";
	    case 50: return "Bibliographies";
	    case 70: return "Theses and postdoctoral theses";
	    case 80: return "Popularization of mathematics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'B': // Educational policy and systems
	  switch(min)
	    {
	    case 10: return "Educational research and planning";
	    case 20: return "General education";
	    case 30: return "Vocational education";
	    case 40: return "Higher education";
	    case 50: return "Teacher education";
	    case 60: return "Adult and further education";
	    case 70: return "Syllabuses, educational standards";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'C': // Psychology of mathematics education, research in mathematics education
	  switch(min)
	    {
	    case 10: return "Comprehensive works";
	    case 20: return "Affective behavior";
	    case 30: return "Cognitive processes, learning theories";
	    case 40: return "Intelligence and aptitudes";
	    case 50: return "Language and verbal communities";
	    case 60: return "Sociological aspects of learning";
	    case 70: return "Teaching-learning processes";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'D': // Education and instruction in mathematics
	  switch(min)
	    {
	    case 10: return "Comprehensive works, comparative studies";
	    case 20: return "Philosophical and theoretical contributions (maths didactics)";
	    case 30: return "Objectives and goals";
	    case 40: return "Teaching methods and classroom techniques";
	    case 50: return "Teaching problem solving and heuristic strategies";
	    case 60: return "Student assessment, achievement control and rating";
	    case 70: return "Learning difficulties and student errors";
	    case 80: return "Teaching units and draft lessons";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'E': // Foundations of mathematics
	  switch(min)
	    {
	    case 10: return "Comprehensive works";
	    case 20: return "Philosophy and mathematics";
	    case 30: return "Logic";
	    case 40: return "Language of mathematics";
	    case 50: return "Reasoning and proving in the mathematics classroom";
	    case 60: return "Sets, relations, set theory";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'F': // Arithmetic, number theory
	  switch(min)
	    {
	    case 10: return "Comprehensive works";
	    case 20: return "Pre-numerical stage, concept of numbers";
	    case 30: return "Natural numbers";
	    case 40: return "Integers, rational numbers";
	    case 50: return "Real numbers, complex numbers";
	    case 60: return "Number theory";
	    case 70: return "Measures and units";
	    case 80: return "Ratio and proportion, percentages";
	    case 90: return "Real life mathematics, practical arithmetic";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'G': // Geometry
	  switch(min)
	    {
	    case 10: return "Comprehensive works";
	    case 20: return "Informal geometry";
	    case 30: return "Areas and volumes";
	    case 40: return "Plane and solid geometry";
	    case 50: return "Transformation geometry";
	    case 60: return "Plane and spherical trigonometry";
	    case 70: return "Analytic geometry. Vector algebra";
	    case 80: return "Descriptive geometry";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'H': // Algebra
	  switch(min)
	    {
	    case 10: return "Comprehensive works";
	    case 20: return "Elementary algebra";
	    case 30: return "Equations and inequalities";
	    case 40: return "Groups, rings, fields";
	    case 50: return "Ordered algebraic structures";
	    case 60: return "Linear algebra";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'I': // Analysis
	  switch(min)
	    {
	    case 10: return "Comprehensive works";
	    case 20: return "Mappings and functions";
	    case 30: return "Sequences and series";
	    case 40: return "Differential calculus";
	    case 50: return "Integral calculus";
	    case 60: return "Functions of several variables";
	    case 70: return "Functional equations";
	    case 80: return "Complex analysis";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'K': // Combinatorics, graph theory, probability theory, statistics
	  switch(min)
	    {
	    case 10: return "Comprehensive works";
	    case 20: return "Combinatorics";
	    case 30: return "Graph theory";
	    case 40: return "Descriptive statistics";
	    case 50: return "Probability theory";
	    case 60: return "Distributions and stochastic processes";
	    case 70: return "Foundations and methodology of statistics";
	    case 80: return "Applied statistics";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'M': // Mathematical modeling, applications of mathematics
	  switch(min)
	    {
	    case 10: return "Modeling and interdisciplinarity";
	    case 20: return "Mathematics in vocational training and career education";
	    case 30: return "Financial and insurance mathematics";
	    case 40: return "Operations research, economics";
	    case 50: return "Physics, astronomy, technology, engineering";
	    case 60: return "Biology, chemistry, medicine";
	    case 70: return "Behavioral and social sciences";
	    case 80: return "Arts, music, language, architecture";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'N': // Numerical mathematics
	  switch(min)
	    {
	    case 10: return "Comprehensive works";
	    case 20: return "Rounding, estimation, theory of errors";
	    case 30: return "Numerical algebra";
	    case 40: return "Numerical analysis";
	    case 50: return "Interpolation and approximation";
	    case 60: return "Mathematical programming";
	    case 70: return "Discrete mathematics";
	    case 80: return "Mathematical software, computer programs";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'P': // Computer science
	  switch(min)
	    {
	    case 10: return "Comprehensive works";
	    case 20: return "Theory of computer science";
	    case 30: return "System software";
	    case 40: return "Programming languages";
	    case 50: return "Programming techniques";
	    case 60: return "Hardware";
	    case 70: return "Computer science and society";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'Q': // Computer science education
	  switch(min)
	    {
	    case 10: return "Comprehensive works";
	    case 20: return "Affective aspects in teaching computer science";
	    case 30: return "Cognitive processes";
	    case 40: return "Sociological aspects";
	    case 50: return "Objectives";
	    case 60: return "Teaching methods and classroom techniques";
	    case 70: return "Student assessment";
	    case 80: return "Teaching units";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'R': // Computer science applications
	  switch(min)
	    {
	    case 10: return "Comprehensive works, collections of programs";
	    case 20: return "Applications in mathematics";
	    case 30: return "Applications in sciences";
	    case 40: return "Artificial intelligence";
	    case 50: return "Data bases, information systems";
	    case 60: return "Computer graphics";
	    case 70: return "User programs, administrative applications";
	    case 80: return "Recreational computing";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	case 'U': // Educational material and media, educational technology
	  switch(min)
	    {
	    case 10: return "Comprehensive works";
	    case 20: return "Textbooks. Textbook research";
	    case 30: return "Teachers' manuals and planning aids";
	    case 40: return "Problem books. Competitions. Examinations";
	    case 50: return "Computer assisted instruction; e-learning";
	    case 60: return "Manipulative materials";
	    case 70: return "Technological tools, calculators";
	    case 80: return "Audiovisual media";
	    case 99: return "None of the above, but in this section";
	    default: return "Subcategory not implemented";
	    }
	default: return "Subcategory not implemented";
	}
    default: return "Subcategory not implemented";
    }
}
